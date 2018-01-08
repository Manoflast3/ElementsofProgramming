/********   All Required Header Files ********/
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
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <cmath>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;

int reverseNumber(int inp) {
    bool isNegative = 0; 
    int res = 0;
    if (inp < 0) {
        isNegative = 1; 
    }
    int i = 0; 
    while(inp) {
        inp = inp/10;
        i++; 
    }
    while(inp) {
        res += (inp%10) * pow(10,i);
        inp /= 10; 
        i--;
    }
    if (isNegative) {
        res *= -1;
    }
    return res; 
}


void reverseString(const string inp) {
    // make a character array and reverse it. 
    int len = inp.length();

    char * ptr = new(sizeof(char) * len);
}

void reverseString(string inp) {

}