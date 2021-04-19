#include "exec_3_2.hpp"

int fat(int n){
    if( n == 0 || n == 1){
        return 1;
    }

    return n*fat(n-1);
}

vector<vector<int > > johnsonTrotter(int n){
    int permutations_num = fat(n);
    vector<int> v_aux(n);
    vector<int> direction(n, -1);
    vector<vector<int> > v;

    auto movel = [](vector<int> v, vector<int> direction){
        int val = 0;

        for(int i = 0; i < v.size(); i++){

            if(direction[ v[i] - 1 ] == -1 && i != 0){
                if(v[i] > v[i-1] && v[i] > val){
                    val = v[i];
                }

            }else if(direction[ v[i] - 1 ] == 1 && i != v.size() - 1){
                if(v[i] > v[i+1] && v[i] > val){
                    val = v[i];
                }
            }

        }

        return val;
    };    

    auto getPos = [](vector<int> v, int m){
            int i = 0;
            for(; i < v.size(); i++){
                if(v[i] == m){
                    return i;
                }
            }
            return 0;
        };
    
    for(int i = 0; i < n; i++){
        v_aux[i] = i + 1;
    }

    v.push_back(v_aux);
    while(--permutations_num){
        
        int val = movel(v_aux, direction);
        int index = getPos(v_aux, val);

        if(direction[ v_aux[index] - 1 ] == -1){
            swap(v_aux[index - 1], v_aux[index]);
        }else{
            swap(v_aux[index], v_aux[index + 1]);
        }

        for(int i = 0; i < n; i++){
            if(v_aux[i] > val){
                direction[ v_aux[i] - 1 ] = (direction[ v_aux[i] - 1 ] == -1) ? 1 : -1;
            }
        }

        v.push_back(v_aux);
    }

    return v;
}