#include "exec_4_10.hpp"

void bfs(vector<vector<int>> graph, int v, vector<bool> &visited){
    vector<int> queue;

    queue.push_back(v);

    while(!queue.empty()){
        for(int i = 0; i < graph[v].size(); i++){
            if(!visited[i] && graph[v][i] != 0){
                v = i;
                visited[i] = true;
                queue.push_back(graph[v][i]);
            }
        }

        queue.erase(queue.begin());
    }
}