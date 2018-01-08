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

// return 1 for palindrone found
bool CanFormPalindrone(const string& s) {
    // Palindrone has double of each, except one at most if odd length
    int length = s.length(); 
    unordered_map<char, int> m; 
    for (char c: s) {
        m[c]++;
    }
    
    int oddCount = 0;
    for (const auto& p: m) {
        if(p.second %2 != 0 && length %2 ==0) {
            return false;
        } else if (p.second%2 != 0 && oddCount == 0 ){
            oddCount ++; 
        } else {
            return false; 
        }
        // * could shorten to */
        if ((p.second %2) && ++oddCount > 1) {
            return false; 
        }
    }
    return true; 
}
// Time and space complexity
// Time : O(n), n is length of string, cuz we iterate through string. 
// Space: O(c), where c is number of distinct characters appearing in string.