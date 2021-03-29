#include "exec_4_8.hpp"

vector<vector<int> > get_permutation(vector<pair<int, double> > itens){
    int cnt = pow(2, itens.size());
    vector<vector<int> > permutations;
    
    for(int i = 0; i < cnt; i++){
        permutations.push_back(vector<int>());
        for(int j = 0; j < itens.size(); j++){
            if((i & (1 << j)) != 0){
                permutations[i].push_back(j + 1);
            }
        }
    }
    return permutations;
}

pair<int, double> knapsack(vector<pair<int, double> > itens, int max_weight){

    pair<int, double> knapsack(0, 0);
    vector<vector<int> > permutations = get_permutation(itens);

    for(auto index : permutations){
        pair<int, double> k_aux(0, 0);
        for(int i = 0; i < index.size(); i++){
            k_aux.first += itens[index[i] - 1].first;
            k_aux.second += itens[index[i] - 1].second;
        }

        if(k_aux.first <= max_weight){
            if(k_aux.second > knapsack.second){
                knapsack.first = k_aux.first;
                knapsack.second = k_aux.second;
            }
        }
    }

    return knapsack;
}