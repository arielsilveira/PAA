#include "coin.hpp"

int coinCollecting(vector<vector<int> > coin){
    vector<vector<int> > f(coin.size(), vector<int>(coin[0].size(), 0));

    f[0][0] = coin[0][0];

    for(int j = 1; j < coin[0].size(); j++){
        f[0][j] = f[0][j-1] + coin[0][j];
    }
    
    for(int i = 1; i < f.size(); i++){
        f[i][0] = f[i - 1][0] + coin[i][0];
        for(int j = 1; j < f[i].size(); j++){
            f[i][j] = max(f[i - 1][j], f[i][j - 1]) + coin[i][j];
        }
    }

    return f[f.size() - 1][f[0].size() - 1];
}

