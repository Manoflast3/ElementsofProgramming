#include <algorithm>
#include <iostream> 

using namespace std; 

class LinkedListArray: 
    // Using Array implementation
    private: 
        ListNode head[1];
        ListNode tail[1]; 
    public: 
        linked_list() {
            head = nullptr 
            tail = nullptr 
        }
        typedef struct Node { 
            int data;
            int next[1];
            int prev[1];
        }ListNode; 

class LinkedListPointers{
    // Using pointer implementation
    private: 
        ListNode *head;
        ListNode *tail; 
    public: 
        linked_list() {
            head = nullptr 
            tail = nullptr 
        }
        typedef struct Node { 
            int data;
            int *next;
            int *prev;
        }ListNode; 

}
class HashTable: 