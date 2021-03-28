#include "exec_4_9.hpp"

bool visit(vector<bool> v){
    for(int i = 0; i < v.size(); i++){
        if(!v[i]){
            return false;
        }
    }
    return true;
}

int main(int argc, const char *argv[]){
    int v, e;
    vector<vector<int>> graph;

    cin >> v >> e;
    vector<bool> visited(v, false);

    for(int i = 0; i < v; i++){
        graph.push_back(vector<int>());
        for(int j = 0; j < e; j++){
            int value = 0;
            cin >> value;
            graph[i].push_back(value);
        }
    }

    dfs(graph, 0, visited);

    if(visit(visited)){
        cout << "All vertices visited" << endl;
    }else{
        cout << "Nothing" << endl;
    }

    
    return 0;
}