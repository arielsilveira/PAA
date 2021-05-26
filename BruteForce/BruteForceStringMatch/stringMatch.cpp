#include "exec_4_4.hpp"

int main(int argc, const char *argv[]){
    string text;
    string key;

    getline(cin, text);
    getline(cin, key);

    cout << "Position found: " << bruteForceStringMatch(text, key) << endl;

    
    return 0;
}