#include "exec_3_7.hpp"

double fakeCoin(vector<double> pile_coin, int init, int end){
    if(end - init < 3){
        end = (end - 1 == init) ? init : end;
        return (pile_coin[init] > pile_coin[end]) ? pile_coin[end] : pile_coin[init];
    }
    int values_subset = ceil((end - init) / 3);
    int end_pile1 = init + values_subset;
    
    int lenght = dif(weight(pile_coin, init, end_pile1), weight(pile_coin, end_pile1, end_pile1 + values_subset));
    
    if(lenght == 1){
        init = end_pile1;
        end = end_pile1 + values_subset;
    }else if(lenght == -1){
        init = init;
        end = end_pile1;
    }else{
        init = end_pile1 + values_subset + 1;
        end = end;
    }

    return fakeCoin(pile_coin, init, end);

}

double weight(vector<double> pile, int init, int end){
    double sum = 0;

    for(int i = init; i < end; i++){
        sum += pile[i];
    }

    return sum;
}

int dif(double p1, double p2){
    if(p1 > p2){
        return 1;
    }else if(p1 < p2){
        return -1;
    }else{
        return 0;
    }
}
