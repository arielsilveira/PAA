#include "exec_3_7.hpp"

int main(int argc, const char *argv[]){
    vector<double> pile;
    double coin;

    while(cin >> coin){
        pile.push_back(coin);
    }

    cout << "Fake coin: " << fakeCoin(pile, 0, pile.size()) << endl;
}