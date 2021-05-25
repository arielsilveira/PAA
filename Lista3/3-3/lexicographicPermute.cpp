#include "exec_3_3.hpp"

int fat(int n){
    if(n == 0 || n == 1){
        return 1;
    }

    return n*fat(n-1);
}

vector<vector< int > > lexicographicPermuted(int n){
    int permutations_num = fat(n);
    vector<vector< int > > v(permutations_num);
    vector<int> permutations(n);

    for(int i = 0; i < n; i++){
        permutations[i] = i + 1;
    }

    int p = 0;
    while(p != permutations_num--){
        v[p] = permutations;
 
        p++;
    }
}