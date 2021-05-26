#include "exec_4_6.hpp"

double state_signal = 0;
double value = 0;
int cnt = 0;

bool checkSignal(){
    if(value >= 0 && state_signal >= 0){
        return true;
    } else if(value < 0 && state_signal < 0){
        return true;
    }
    return false;
}

bool colinearity(pair<int, int> p1, pair<int, int> p2, vector<pair<int, int>> points){
    if(points.empty()){
        return true;
    }

    double a = p2.second - p1.second;
    double b = p1.first - p2.first;
    double c = p1.first * p2.second - p1.second * p2.first;

    value = a * points[0].first + b * points[0].second - c;
    
    if(!checkSignal()){
        return false;
    }

    state_signal = value;

    points.erase(points.begin());

    return colinearity(p1, p2, points);
    
}

vector<pair<int, int>> convexHull(vector<pair<int, int> > points){
    points.push_back(points[0]);
    vector<pair<int, int> > convex;

    for(int i = 0; i < points.size() - 1; i++){
        for(int j = i+1; j < points.size(); j++){
            if(colinearity(points[i], points[j], points)){
                convex.push_back(pair<int,int>(points[j].first, points[j].second));
            }
            state_signal = value = cnt = 0;
        }
    }

    return convex;

}