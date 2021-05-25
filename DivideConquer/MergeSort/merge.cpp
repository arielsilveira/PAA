#include "merge.hpp"


int main(int argc, const char *argv[]){

    vector<long long int> v;
    long long int value;

    while(cin >> value){
        v.push_back(value);
    }

    ordenaMergeSort(v, 0, v.size() - 1);

    cout << "Vetor Ordenado:";
    for(int i = 0; i < v.size(); i++){
        cout << " " << v[i];
    }
    cout << endl;


    return 0;
}