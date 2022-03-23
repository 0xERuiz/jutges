#include <iostream>
#include <vector>
using namespace std;


void ordena_per_insercio(vector<double>& v)	{
	int n = int(v.size());
	for (int i = 1; i < n; i++)
		for (int j = i; j>0 and v[j-1] > v[j]; --j)
			swap(v[j-1], v[j]);
}

int main() {}
