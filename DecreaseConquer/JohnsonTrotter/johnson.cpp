#include "exec_3_2.hpp"

int main(int argc, const char *argv[]){

    int n;

    cin >> n;

    vector<vector<int > > v;
    v = johnsonTrotter(n);
    cout << "V: " << v.size() << endl;

    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < v[i].size(); j++){
            cout << " " << v[i][j];
        }
        cout << endl;
    }

    return 0;
}