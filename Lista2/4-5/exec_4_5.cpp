#include "exec_4_5.hpp"

int main(int argc, const char *argv[]){
    vector<pair<int, int> > points;
    int x, y;
    int i = 0;

    while(cin >> x >> y){
        points.push_back(pair<int, int>(x,y));
        cout << x << y << endl;
    }

    cout << "Distance: " << bruteForceClosestPair(points) << endl;

    
    return 0;
}