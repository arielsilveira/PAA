#include "exec_4_8.hpp"

int main(int argc, const char *argv[]){
    vector<pair<int, double> > itens;
    int weight; 
    double value;
    int max_weight = 0;

    cin >> max_weight;

    while(cin >> weight >> value){
        itens.push_back(pair<int, double>(weight, value));
    }

    pair<int, double> iten = knapsack(itens, max_weight);

    cout << "Weight: " << iten.first << endl;
    cout << "Value: " << iten.second << endl;
    

    return 0;
}