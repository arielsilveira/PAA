#include "exec_4_7.hpp"
#include <limits>

vector<vector<int> > get_permutation(vector<vector<int> > graph, int init){
    vector<vector<int> > permutations;
    vector<int> permutation_temp;

    for(int i = 0; i < graph.size(); i++){
        permutation_temp.push_back(i);
    }

    int i = 0;

    do{
        permutations.push_back(vector<int>());
        for(int j = 0; j < permutation_temp.size(); j++){
            permutations[i].push_back(permutation_temp[j]);
        }
        i++;
    }while(next_permutation(permutation_temp.begin(), permutation_temp.end()));

    return permutations;
}

vector<int> tsp(vector<vector<int> > graph, int init){
    int soma = std::numeric_limits<int>::max();
    int route = 0;
    vector<vector<int> > permutations = get_permutation(graph, init);

    for(int i = 0; i < permutations.size(); i++){
        int temp = 0;
        int j = 0;

        for(j = 0; j < permutations[i].size() - 1; j++){
            if(graph[permutations[i][j]][permutations[i][j + 1]]){
                temp += graph[permutations[i][j]][permutations[i][j + 1]];
            }else{
                break;
            }
        }
        temp += graph[permutations[i][j]][init];
        if(temp < soma && graph[permutations[i][j]][init] != 0 && j + 1 == graph.size()){
            route = i;
            soma = temp;
        }

    }

    cout << "Custo total: " << soma << endl;
    return permutations[route];
}