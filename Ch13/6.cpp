/********   All Required Header Files (C++ version) ********/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <unordered_map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <cmath>
#include <cstdio>
#include <string>
#include <cstdlib>
#include <cassert>

using namespace std;

// return shortest distance of a repeated word in an array
// returns int max if there are no repeated words. 
int nearestDistance(const vector<const string>& sV) {
    // string and distance 
    unordered_map<string, int> m; 
    int i = 0; 
    int current_min = numeric_limits<int>::max();
    // init to zero. 
    for (const auto &s: sV) {
        m[s] = 0; 
    }
    for (const auto &s: sV) {
        if ( i - m[s] < current_min )
            current_min = i - m[s];
        m[s] = i;
        i++; 
    }
    return current_min;
}


// using file
// Note that we only have to save the latest index of a word that has been repeated. We can ignore unrepeated words. 
// returns int max if there are no repeated words. 
int nearestDistance(const vector<const string>& sV) {
    // string and distance 
    unordered_map<string, int> m; 
    int i = 0; 
    int current_min = numeric_limits<int>::max();
    for (const auto &s: sV) {
        if (m.find(s)!= m.end()) {
            if ( i - m.find(s)->second < current_min )
                current_min = i - m[s];
        }
        m[s] = i;
        i++; 
    }
    return current_min;
}
