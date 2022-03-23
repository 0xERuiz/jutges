#include <iostream>
#include <vector>
using namespace std;


int first_occurrence(double x, const vector<double>& v)	{
	int posi=-1;
	int posf = int(v.size());
	while(posi+1<posf)	{
		int aux = (posi+posf)/2;
		if(v[aux]<x)	{
			posi = aux;
		} else {
			posf = aux;
		}
	}
	if (posf<int(v.size()) and  v[posf] == x) return posf;
	return -1;
}

int main() {
    int n;
    while (cin >> n) {
        vector<double> V(n);
        for (int i = 0; i < n; ++i) cin >> V[i];
        int t;
        cin >> t;
        while (t--) {
            double x;
            cin >> x;
            cout << first_occurrence(x, V) << endl;
        }
    }
}
