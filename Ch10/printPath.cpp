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
#include "BinaryTreeImplementation.h"


using namespace std;

// Code here
template <Type T> 
void printPath(const unique_ptr<BinaryTreeNode<T>> &root, const unique_ptr<BinaryTreeNode<T>> &node){
    template <Type T> vectom,r<BinaryTreeNode<T>> path;
    if (!hasPath(root, node, path)) {
        print("Has no path"); 
        return;
    } else { 
        for (auto &e: path) {
            print(e);
        }
    }



    return; 
}

template <Type T> 
bool hasPath(const unique_ptr<BinaryTreeNode<T>> &root, const unique_ptr<BinaryTreeNode<T>> &node, vector<BinaryTreeNode<T>> path){
    if (!root) {
        return 0; 
    } else if {root == node} {
        return 1; 
    }
    if (hasPath(root->left, node)) 
        return 1;
    if (hasPath(root->right, node))
        return 1; 

    // if both left adn right subtrees do not have the node we are looking for, remove this root from path(and all its subtrees)

    path.pop_back();
    return 0; 
}

int main() {
    // for testing

    return 0; 
}