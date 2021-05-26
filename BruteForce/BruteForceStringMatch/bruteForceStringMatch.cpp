#include "exec_4_4.hpp"

int bruteForceStringMatch(string text, string t){

    for (int i = 0; i < text.size() - t.size(); i++){
        int j = 0;

        while(j < t.size() && t[j] == text[i+j]){
            ++j;
        }

        if(j == t.size()){
            return i;
        }
    }

    return -1;
}