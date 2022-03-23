#include <iostream>
#include <stack>
using namespace std;

int main()	 {
	int x;
	stack<int> s;
	while(cin>>x)	{
		if(x!=-1) s.push(x);
		else {
			while(not s.empty())	{
				cout << s.top();
				s.pop();
				if(s.size() > 0) cout << " ";
			}
		cout << endl;
		}
	}	
}
