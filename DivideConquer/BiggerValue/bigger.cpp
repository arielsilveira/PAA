#include <bits/stdc++.h>

using namespace std;

double bigger_value(vector<double> v, int init, int end){
    if(init == end){
        return init;
    }

    int pos = (end + init) / 2;

    double left = bigger_value(v, init, pos);
    double right = bigger_value(v, pos + 1, end);

    return (v[left] >= v[right] ? left : right);

}

int main(int argc, const char *argv[]){

    double bigger;
    vector<double> v;

    while(cin >> bigger){
        v.push_back(bigger);
    }

    bigger = bigger_value(v, 0, v.size() - 1);
    

    cout << "A posição do maior valor é: " << bigger << endl;
    cout << "O maior valor é: "<< v[bigger] << endl;
    return 0;
}