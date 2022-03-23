#include <iostream>
#include <stack>
#include <sstream>
#include <iostream>
using namespace std;

int main()	 {
	string line;
	int x;
	stack<int> p;
	stack<int> s;
	
	while(getline(cin, line))	{
		istringstream mycin(line);
		while(mycin >> x)	{
			if(x%2==0) p.push(x);
				else s.push(x);
		}
		bool primer = true;
		while(not p.empty())	{
			if(not primer) cout << " ";
			primer = false;
			cout << p.top();
			p.pop();
		}
		while(not s.empty())	{
			if(not primer) cout << " ";
			primer = false;
			cout << s.top();
			s.pop();
		}
		cout << endl;
	}
}
