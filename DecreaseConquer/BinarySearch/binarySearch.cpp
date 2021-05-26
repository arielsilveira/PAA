#include "exec_3_5.hpp"

int binarySearch(vector<int> v, int init, int end, int n){
    if(end >= init){
        int pos = init + (end - init) / 2;

        if(v[pos] == n){
            return pos;
        }
        
        if(v[pos] > n){
            return binarySearch(v, init, pos - 1, n);
        }

        return binarySearch(v, pos + 1, end, n);
    }

    return -1;
}