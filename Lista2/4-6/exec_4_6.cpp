#include "exec_4_6.hpp"

int main(int argc, const char *argv[]){
    vector<pair<int, int> > points;
    int x, y;
    int i = 0;

    while(cin >> x >> y){
        points.push_back(pair<int, int>(x,y));
    }

    if(points.size() > 2){
        points = convexHull(points);
    }

    cout << "Convex polygon points: {";
    for(int i = 0; i < points.size(); i++){
        cout << "(" << points[i].first << ", " << points[i].second << ")";
        if(i != points.size()-1){
            cout << "; ";
        } 
    }
    cout << "}" << endl;
    
    return 0;
}