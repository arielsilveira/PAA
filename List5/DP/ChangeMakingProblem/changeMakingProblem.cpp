#include "changeMaking.hpp"

int changeMaking(vector<int> coin, int n){
    vector<int> f(n + 1);

    f[0] = 0;

    cout << endl;

    for(int i = 1; i < f.size(); i++){
        int temp = numeric_limits<int>::max();
        int j = 0;
        while(j < coin.size() && i >= coin[j]){
            cout << "J: " << j << endl;
            cout << "I: " << i << endl;
            cout << "Coin: " << coin[j] << endl;
            temp = min(f[ i - coin[j] ], temp);
            j++;
            // cout << endl;
        }

        cout << "Temp: " << temp << endl;
        cout << "F[" << i-1 << "]: " << f[i-1] << endl << endl;

        f[i] = temp + 1;
    }

    return f[f.size() - 1];
}