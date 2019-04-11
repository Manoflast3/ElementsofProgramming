// Given pointer to the head node of a linked list, the task is to reverse the linked list. We need to reverse the list by changing links between nodes.
// 
// Examples:
// 
// Input : Head of following linked list  
//        1->2->3->4->NULL
// Output : Linked list should be changed to,
//        4->3->2->1->NULL
// 
// Input : Head of following linked list  
//        1->2->3->4->5->NULL
// Output : Linked list should be changed to,
//        5->4->3->2->1->NULL
// 
// Input : NULL
// Output : NULL
// 
// Input  : 1->NULL
// Output : 1->NULL

template<class T>
struct Node{
    T data;
    Node<T>* next;
};

template<class T>
class LinkedList{
    public: 
        LinkedList(head){
            head = head;
        }
        Node<T>* reverse_linked_list(){
            Node<T> * behind = head;
            Node<T> * ahead = behind->next;
            while(ahead != nullptr) { 
                temp = ahead->next;
                ahead->next = behind;
                behind = ahead;
                ahead = temp; 
            }
            head = (*behind);
            return head;
        }    
    private: 
        Node<T> head;
}



