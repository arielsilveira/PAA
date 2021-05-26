#include "exec_3_1.hpp"

void insertionSort(vector<int> &v){
    long long int aux, j;

    for (int i = 1; i < v.size(); ++i){
		aux = v[i];
		j = i-1;

		while(j >= 0 && v[j] > aux){
			v[j+1] = v[j];
			j--;
		}

		v[j+1] = aux;
	}

}