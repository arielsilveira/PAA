#include "exec_4_3.hpp"

int main(int argc, const char *argv[]){
    vector<int> v;
    int value;
    int pos;

    cin >> pos;

    while(cin >> value){
        v.push_back(value);
    }

    cout << "Position found: " << sequentialSearch2(pos, v) << endl;

    
    return 0;
}