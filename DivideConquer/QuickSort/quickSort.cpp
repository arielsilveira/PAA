#include "quick.hpp"

void ordenaQuick(vector<long long int> &v, long long int inicio, long long int fim){

	while(fim - inicio >= 1){
		long long int pivot = Lomuto(v, inicio, fim);

		if((pivot - 1) - inicio <= fim - (pivot +1)){
			ordenaQuick(v, inicio, pivot -1);
			inicio = pivot + 1;
		} else {
			ordenaQuick(v, pivot + 1, fim);
			fim = pivot - 1;
		}
	}
}

long long int Lomuto(vector<long long int> &v, long long int inicio, long long int fim){
	long long int pivot = inicio;

	for(long long j = inicio + 1; j <= fim; j++){
		if(v[j] < v[inicio]){
			pivot++;
			swap(v[pivot], v[j]);
		}
	}

	swap(v[inicio], v[pivot]);

	return pivot;
}
