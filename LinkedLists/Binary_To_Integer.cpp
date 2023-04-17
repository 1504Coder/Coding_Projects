#include <iostream>
#include <cmath>
using namespace std;

struct Node{
Node *next;
int val;
Node(int val, Node *next){
this->next = next;
this->val = val;
}
};

/*
Constraints:
The Linked List is not empty.
Number of nodes will not exceed 30.
Each node's value is either 0 or 1.
*/

//Iteratively *Also could've used doubling method*
int getDecimalValue_iter(Node* head) {
    string binary = "";
    while(head != nullptr){ 
        binary += to_string(head->val);
        head = head->next;
    }
    int power = 0;
    int sum = 0;
    for(int i=binary.size()-1;i>=0;i--){

        if(binary[i] == '1'){
            sum += pow(2,power);
            power++;
        }
        else{
            sum+=0;
            power++;
        }
    }
return sum;
}

// Recursively
int getDecimalValue_recur_Helper(Node* head, int numb){
if(head->next == nullptr){ //Base case executes if the size of the linked list is 1
return numb*2 + 1;
}
else{
numb = (numb*2)+(head->val);
head = head->next;
return getDecimalValue_recur_Helper(head,numb);
}
}


int getDecimalValue_recur(Node* head){
    int numb=0;
    return getDecimalValue_recur_Helper(head, numb);
}

int main(){
Node *head = new Node(1, new Node(0, new Node(0, new Node(1, new Node(1, nullptr)))));
cout<<getDecimalValue_iter(head)<<endl;
cout<<getDecimalValue_recur(head)<<endl;
return 0;
}