# include <iostream>
using namespace std;

// Making Linked List
struct Node{
Node *next;
int val;
Node(int val, Node *next){
this->val = val;
this->next = next;
}
};

// Iteratively
void printLinkedList_iter(Node *l1){
    while(l1!=nullptr){
        cout<<l1->val<<endl;
        l1 = l1->next;
    }
 }

 //Recursively
void printLinkedList_recur(Node *l1){
    if(l1==nullptr){
        cout<<" ";
    }
    else{
        cout<<l1->val<<endl;
        l1 = l1->next;
        printLinkedList_recur(l1);
    }
}

int main(){
Node *head = new Node(5, new Node(7, new Node(83, new Node(26, new Node(68, new Node(1,nullptr))))));
//printLinkedList_iter(head);
Node *head2 = nullptr;
printLinkedList_recur(head);
    return 0;
}