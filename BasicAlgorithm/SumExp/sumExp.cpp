#include <bits/stdc++.h>

using namespace std;

long int sum_exp(int n){
    if(n == 0){
        return 1;
    }

    return sum_exp(n-1) + sum_exp(n-1);
}

long int sum_exp2(int n){
    long x = 1;
    
    for(int i = 0; i < n; i++){
        x = x + x;
    }

    return x;
}

int main(int argc, char *argv[]){

    int n;

    cin >> n;

    cout << "2^n = " << sum_exp2(n) << endl;

    return 0;
}