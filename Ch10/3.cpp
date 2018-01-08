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

// Code here

// Lowest Common Ancestor Algorithm with no parent field on binary tree
// Brute  force : find the lowest common ancestor by comparing each node to every other one, O(n^2) runetime
// ancestor conditions: lies on search path from node c to the root. 
// Better algorithm: perform two searches on the BT,  store the path to these nodes based on preOrder traversal. Runtime is still  O(n^2),

// Ideal algorithm: 
// root, left, right

// Returns the data value of the LCA. 
template <Type T> 
int LCA(const unique_ptr<BinaryTreeNode<T>> &root, const unique_ptr<BinaryTreeNode<T>> &A, const unique_ptr<BinaryTreeNode<T>> &B, const unique_ptr<vector<BinaryTreeNode<T>> path1) {
    if (!root) {
        return; 
    }

    path1->push_back(root);
    LCA(root->left); 
    inOrderTraversal(root->right); 
}

int main() {
    // for testing

    return 0; 
}