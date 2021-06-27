#include <bits/stdc++.h>

using namespace std;

vector<vector<int> > f;
vector<int> weight;
vector<int> values;

int mfKnapsack(int i, int j){

    if(f[i][j] < 0){
        if(j < weight[i-1]){
            f[i][j] = mfKnapsack(i - 1, j);

        }else{
            f[i][j] = max(mfKnapsack(i - 1, j), 
                        values[i - 1] + mfKnapsack(i - 1, j - weight[i - 1]));

        }
    }

    return f[i][j];

} 

int main(int argc, const char *argv[]){
    int items, w, i;
    cin >> items >> w;

    for(int p = 0; p < items; p++){
        cin >> i;
        weight.push_back(i);
    }

    for(int p = 0; p < items; p++){
        cin >> i;
        values.push_back(i);
    }

    for(int i = 0; i <= items; i++){
        vector<int> aux;
        f.push_back(aux);
        for(int j = 0; j <= w; j++){
            f[i].push_back(-1);
        }
    }

    for(int i = 0; i <= items; i++){
        f[i][0] = 0;
    }

    for(int i = 0; i <= w; i++){
        f[0][i] = 0;
    }

    cout << "Solving: " << mfKnapsack(items, w) << endl;

    return 0;
}