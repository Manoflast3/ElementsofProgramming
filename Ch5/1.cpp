#include <algorithm>
#include <cmath>

kwordSize = 4;
int LookupTable = [0,1,1,0,1,0,0,1,1,0,0,1,0,1,1,0]


// input: 64 bit input 
int ParityCheck(long long input) {
    int result = 0; 
    while (input > 0){
        result ^= LookupTable[input & (pow(2,4) - 1)]
        input = input >> 4;
    }
    return result; 
}

// Runtime is O(log(n)), where n is wordsize. 