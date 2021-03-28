#include "exec_4_1.hpp"

void bubble(vector<int> &v){
    for (int i = 0; i < v.size(); i++){
        for (int j = i + 1; j < v.size(); j++){
            if (v[i] > v[j]){
                swap(v[i], v[j]);
            }
        }
    }
}

void printVector(string text, vector<int> v){
    cout << text;
    for(int i = 0; i < v.size(); i++){
        if(i != v.size() - 1){
            cout << v[i] << ", ";
        }else{
            cout << v[i];
        }
    }

    cout << "]" << endl;
}