#include <algorithm> 
#include <cmath> 
#include <cstdint> 

// Input is array of length 64. 
// swap at i and j
int * swap_bits_bruteforce(int *input, int i, int j){
    if (input[i] ^ input[j]) {
        input[i] = !input[i];
        input[j] = !input[j];
    }
    return input; 
}

// optimal solution
int swap_bits(uint64_t input, uint32_t i, uint32_t j){
    if( ((input >> i) ^ (input >> j)) & ~(input - 1) ){
        uint32_t bitmask = ((1L << i) | (1L << j));
        input ^= bitmask;
    }
    return input;
} 