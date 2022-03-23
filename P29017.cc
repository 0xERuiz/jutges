#include <iostream>
#include <stack>
using namespace std;


void escriu_de_cim_a_base(stack<int>& pila)	{
	
	while(not pila.empty())	{
		cout << pila.top();
		pila.pop();
		if(pila.size() > 0) cout <<" ";
	}
	cout << endl;
}

void escriu_de_base_a_cim(stack<int>& pila)	{
	stack<int> pila2;
	while(not pila.empty())	{
		pila2.push(pila.top());
		pila.pop();
	}
	while(not pila2.empty())	{
		cout << pila2.top();
		pila2.pop();
		
		if(pila2.size() > 0) cout << " ";
	}
	cout << endl;
}


int main() {
  int n;
  while (cin >> n) {
    stack<int> pila;
    while (n--) {
      int x;
      cin >> x;
      pila.push(x);
    }

    stack<int> copia = pila;
    escriu_de_cim_a_base(pila);
    escriu_de_base_a_cim(copia);
  }
}
