#include "exec_4_2.hpp"

int main(int argc, const char *argv[]){
    vector<int> v;
    int value;

    while(cin >> value){
        v.push_back(value);
    }

    printVector("Vector: ", v);
    selectionSort(v);
    printVector("Result: ", v);
    
    return 0;
}