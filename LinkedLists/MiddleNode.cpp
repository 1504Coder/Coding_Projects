# include <iostream>
using namespace std;

struct Node{
Node *next;
int val;
Node(int val, Node *next){
this->next = next;
this->val = val;
}
};

// head will iterate once while tail will iterate twice. When tail is done iterating, head will be in the middle.
Node* middleNode(Node* head){
Node *tail= head;
while(tail != nullptr){
    if(tail->next == nullptr){
    return head;
    }
    else{
    tail = tail->next->next;
    head = head->next;
    }
}
return head;
}

int main(){
Node *head = new Node(1, new Node(2, new Node(3, new Node(4, new Node(5, nullptr)))));

Node *head2 = new Node(1, new Node(2, new Node(3, new Node(4, new Node(5, new Node(6, nullptr))))));

Node *middle = middleNode(head);

Node *middle2 = middleNode(head2);

while(middle != nullptr){
cout<<middle->val;
middle = middle->next;
}
cout<<""<<endl;

while(middle2 != nullptr){
cout<<middle2->val;
middle2 = middle2->next;
}

    return 0;
}