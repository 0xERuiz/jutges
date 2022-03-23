#include <iostream>
#include <string>
#include <stack>
using namespace std;

/*

bool benParentitzat(int &is, string &s)	{
	if(s[is]=='(')	{
		++is;
		if(not benParentitzat(is, s)) return false;
		if(not (is<int(s.size()) and s[is]==')')) return false;
		++is;
		benParentitzat(is, s);
	}
}
*/


bool benParentitzat(const string &s)	{
	stack<char> p;
	for(int i=0;i<int(s.size());++i)	{
		char c = s[i];
		if(c=='(' or c == '[') p.push(c);
		else{
			if(p.empty()) return false;
			if(c == ')' and p.top() != '(') return false;
			if(c == ']' and p.top() != '[') return false;
			p.pop();
		}
	}
	return p.empty();
}

int main()	{
	string s;
	while(cin>>s)	{
		if(benParentitzat(s)) cout << s << " es correcta" << endl;
			else cout << s << " es incorrecta" << endl;
	}
}
