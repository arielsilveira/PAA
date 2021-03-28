#include "exec_4_5.hpp"
#include <limits>

double bruteForceClosestPair(vector<pair<int, int> > points){
    double d = std::numeric_limits<int>::max();

    for(int i = 0; i < points.size(); i++){
        for(int j = i+1; j < points.size(); j++){
            int dist_x = pow(points[i].first - points[j].first, 2);
            int dist_y = pow(points[i].second - points[j].second, 2);
            d = min(d, sqrt(dist_x + dist_y));
        }
    }

    return d;
}