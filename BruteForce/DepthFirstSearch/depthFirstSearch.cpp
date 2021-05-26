#include "exec_4_9.hpp"

void dfs(vector<vector<int>> graph, int v, vector<bool> &visited){

    visited[v] = true;
    for (int i = 0; i < graph[v].size(); i++){
        if (!visited[i]){
            dfs(graph, i, visited);
        }
    }
}