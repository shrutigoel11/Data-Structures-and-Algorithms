#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    ~Node(){
    if(this->next!=NULL){
        delete this->next;
        next=NULL;
    }
    }
    
};

Node *removeDuplicates(Node *&head)
{
 if(head==NULL){
     return NULL;
 }
 Node* curr=head;
 while( curr != NULL) {
     if(curr->next!=NULL && curr->data==curr->next->data){
         Node*curr_next=curr->next->next; // taki piche wali unreachable n ho
          Node*curr_delete=curr->next;
         delete (curr_delete);
         curr->next=curr_next;
        
     }
     else{
         curr=curr->next;
     }
 }
 return head;
}

int main()
{   
    Node*head=NULL;
 // Create a linked list: 1 -> 2 -> 2 -> 3 -> 3 -> 4 -> nullptr
    head = new Node{1};
    head->next = new Node{2};
    head->next->next = new Node{2};
    head->next->next->next = new Node{3};
    head->next->next->next->next = new Node{3};
    head->next->next->next->next->next = new Node{4};
    
    // Remove duplicates
    head = removeDuplicates(head);
    
    // Print the modified linked list
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;


return 0;
}