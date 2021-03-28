#include "exec_4_2.hpp"

void selectionSort(vector<int> &v){
    for (int i = 0; i < v.size(); i++){
        int index = i;

        for (int j = index; j < v.size(); j++){
            if (v[j] < v[index]){
                index = j;
            }
        }

        swap(v[i], v[index]);
    }
}

void printVector(string text, vector<int> v){
    cout << text << "[";
    for(int i = 0; i < v.size(); i++){
        if(i != v.size() - 1){
            cout << v[i] << ", ";
        }else{
            cout << v[i];
        }
    }

    cout << "]" << endl;
}