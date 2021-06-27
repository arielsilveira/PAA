#include "coin.hpp"

int main(int argc, const char *argv[]){
    int n, m;
    cin >> n >> m;

    vector<vector<int> > coin(n, vector<int>(m, 0));
    int in;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> in;
            coin[i][j] = in;
        }
    }

    cout << "Result: " << coinCollecting(coin) << endl;

    return 0;
}