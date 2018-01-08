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

// left, root, right
template <Type T> 
void inOrderTraversal(const unique_ptr<BinaryTreeNode<T>> &root){
    if (!root) {
        return; 
    }

    inOrderTraversal(root->left); 
    print(root->data); //assume this is printable. 
    inOrderTraversal(root->right); 
}


// right, left, root
template <Type T> 
void postOrderTraversal(const unique_ptr<BinaryTreeNode<T>> &root){
        if (!root) {
        return; 
    }

    postOrderTraversal(root->right); 
    postOrderTraversal(root->left); 
    print(root->data); //assume this is printable. 
}

// root, left, right
template <Type T> 
void preOrderTraversal(const unique_ptr<BinaryTreeNode<T>> &root){
    if (!root) {
        return; 
    }

    print(root->data); //assume this is printable.     
    preOrderTraversal(root->left); 
    preOrderTraversal(root->right); 
}

int main() {
    // for testing

    return 0; 
}