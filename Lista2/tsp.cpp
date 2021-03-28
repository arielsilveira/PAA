#include "list2.hpp"

bool visitados(vector<bool> visited){
    for(int i = 0; i < visited.size(); i++){
        if(!visited[i]){
            return false;
        }
    }
    return true;
}

int tsp(vector<vector<int> > graph, int init){
    vector<bool> visited(graph.size(), false);
    vector<int> state_visited;
    int soma = 0;
    int i = init;
    
    state_visited.push_back(i);
    visited[i] = true;
    while(true){
        cout << "I: " << i << endl;
        int j = 0;
        for(; j < graph.size(); j++){
            if(!visited[j] && graph[i][j] != 0){
                visited[i] = true;
                soma += graph[i][j];
                i = j;
                state_visited.push_back(j);
                break;
            }
        }

        if(j == graph.size()){
            i = state_visited.back();
            state_visited.pop_back();
            // soma -=
        }

        if(visitados(visited) && i == 0){
            break;
        }
    }

    return soma;
}

