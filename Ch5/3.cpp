// Assume that the lookup table in constructed in a way that looking up the
// kth index will find the reverse of k (in bits). eg A[k]

//eg input: FF80
long A[16];
// Assume input is 64 bit word
void reversebits( long x) {
    int bitmask = 0xFFFF;
    int wordSize = 16; 
    return A[bitmask & (x>>(3*wordSize))] << (3*wordSize) + 
           A[bitmask & (x>>(2*wordSize))] << (2*wordSize) +
           A[bitmask & (x>>(wordSize))] << (wordSize) + 
           A[bitmask & x];
}