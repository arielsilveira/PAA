#include "exec_3_5.hpp"

int main(int argc, const char *argv[]){

    int n, val;
    vector<int> v;

    cin >> n;

    while(cin >> val){
        v.push_back(n);
    }

    sort(v.begin(), v.end());
    
    int pos = binarySearch(v, 0, v.size(), n);

    cout << "Valor " << v[pos] << " na posição " << pos << endl;

    return 0;
}