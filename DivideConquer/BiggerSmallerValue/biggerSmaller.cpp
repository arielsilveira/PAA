#include <bits/stdc++.h>

using namespace std;

pair<double, double> bigger_smaller_value(vector<double> v, int init, int end){
    if(init == end){
        return make_pair(init, init);
    }

    int pos = (end + init) / 2;

    pair<double, double> left = bigger_smaller_value(v, init, pos);
    pair<double, double> right = bigger_smaller_value(v, pos + 1, end);

    double first = (v[left.first] >= v[right.first] ? left.first : right.first);
    double second = (v[left.second] < v[right.second] ? left.second : right.second); 

    return make_pair(first, second);
}

int main(int argc, const char *argv[]){

    double bigger, smaller;
    vector<double> v;
    pair<double, double> p;

    while(cin >> smaller){
        v.push_back(smaller);
    }

    p = bigger_smaller_value(v, 0, v.size() - 1);

    cout << "Posição Maior valor: " << p.first << endl;
    cout << "Posição Menor valor: " << p.second << endl;
    cout << endl;
    cout << "Maior valor: " << v[p.first] << endl;
    cout << "Menor valor: " << v[p.second] << endl;
    

    return 0;
}