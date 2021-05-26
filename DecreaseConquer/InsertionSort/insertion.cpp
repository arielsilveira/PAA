#include "exec_3_1.hpp"

int main(int argc, const char *argv[]){
    int val;
    vector<int> v;

    while( cin >> val){
        v.push_back(val);
    }

    cout << "Vetor original:";
    for(int i = 0; i < v.size(); i++){
        cout << " " << v[i];
    }
    cout << endl;

    insertionSort(v);

    cout << "Vetor ordenado:";
    for(int i = 0; i < v.size(); i++){
        cout << " " << v[i];
    }
    cout << endl;

    return 0;
}