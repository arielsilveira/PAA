#include "exec_4_7.hpp"

int main(int argc, const char *argv[]){
    int v, init;
    int weight;

    cin >> v >> init;
    vector<vector<int> > graph;

    for(int i = 0; i < v; i++){
        graph.push_back(vector<int>());
        for(int j = 0; j < v; j++){
            cin >> weight;
            graph[i].push_back(weight);
        }
    }

    vector<int> route = tsp(graph, init);

    cout << "Rota: ";
    for(int i = 0; i < route.size(); i++){
        cout << route[i] << " ";
    }
    cout << endl;

    return 0;
}