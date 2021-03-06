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

template <Type T> 
struct BinaryTreeNode{
    T data; 
    unique_ptr<BinaryTreeNode<T>> left, right; 
}

