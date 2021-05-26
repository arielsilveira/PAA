#include "exec_4_3.hpp"

int sequentialSearch2(int n, vector<int> v){

    v.push_back(n);
    int i = -1;

    while(v[++i] != n);

    return ((i < v.size()) ? i : -1);
}