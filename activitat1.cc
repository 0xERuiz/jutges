#include <iostream>
#include <vector>
#include <string>
using namepsace std;

void llegir	{
	int m, n;
	cin >> m, n;
	char M[m][n];
	for(int i=0; i<m; ++i)	{
		for(int j=0;j<n;++j)	{
			cin >> M[i][j];
		}
	}
}
void escriure	{
	for(int i=0; i<m; ++i)	{
		for(int j=0;j<n;++j)	{
			cout << M[i][j];
		}
		cout << endl;
	}
}
void comprovar_cami
void resetejar_mon	{
	for(int i=0; i<m; ++i)	{
		for(int j=0;j<n;++j)	{
			M[i][j]='o';
		}
		cout << endl;
	}
}
void acabar	{
	jugant=false;
}







int main()	{
	string entrada;
	cin >> entrada;
	if(entrada=="llegir") llegir();
}

