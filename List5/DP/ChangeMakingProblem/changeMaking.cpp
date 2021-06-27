#include "changeMaking.hpp"

int main(int argc, const char *argv[]){
    
    vector<int> coin;
    int n, c;

    cin >> n;

    while(cin >> c){
        coin.push_back(c);
    }

    cout << "Smaller number of coin: " << changeMaking(coin, n) << endl;

    return 0;
}