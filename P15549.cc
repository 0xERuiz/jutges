#include <iostream>
#include <vector>
using namespace std;

//Pruebita de papiloko para git
void ordena_per_bombolla(vector<double>& v){
	int tam = int(v.size());
	for(int j=0;j<tam;++j)	{
		for(int i=0;i<tam-1;++i)	{
			if(v[i]>v[i+1])
				swap(v[i], v[i+1]);
		}
	}
}


int main() {
    int n;
    while (cin >> n) {
        vector<double> v(n);
        for (int i=0; i<n; ++i) {
            cin >> v[i];
        }
        ordena_per_bombolla(v);
        for (int i=0; i<n; ++i) {
            cout << " " << v[i];
        }
        cout << endl;
    }
}
