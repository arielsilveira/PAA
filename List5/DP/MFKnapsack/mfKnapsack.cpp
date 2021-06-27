#include "knapsack.hpp"

int mfKnapsack(int i, int j){
    if(f[i][j] < 0){
        int value;
        if(j < weight[i]){
            value = mfKnapsack(i - 1, j);

        }else{
            value = max(mfKnapsack(i - 1, j), values[i] + mfKnapsack(i - 1, weight[i]));

        }

        f[i][j] = value;
    }

    return f[i][j];

} 