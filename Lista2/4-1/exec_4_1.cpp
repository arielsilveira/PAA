#include "exec_4_1.hpp"

int main(int argc, const char *argv[]){
    vector<int> v;
    int value;

    while(cin >> value){
        v.push_back(value);
    }

    printVector("Vector: ", v);
    bubble(v);
    printVector("Result: ", v);
    
    return 0;
}