
#include<vector>
#include <iostream>
using namespace std;
class Node {
    public:
    int data;
    Node *next;
    Node(int x) {
    this->data = x;
    this->next = NULL;
  }
};
class Solution
{
    private:
    Node* reverse(Node*&head){
        Node*curr=head;
        Node*prev=NULL;
        Node*next=NULL;
        
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    
   void insertAtTail(Node*& head, Node*& tail, int data) {
    Node* node = new Node(data);
    if (head == NULL) {
        head = node;
        tail = node;  // Update tail when inserting the first node
    } else {
        tail->next = node;
        tail = node;  // Update tail when inserting subsequent nodes
    }
}
    
    Node* addNodes(Node*&first, Node*&second){
        
        Node* ansHead=NULL;
        Node* ansTail=NULL;
        int carry=0;
        
        while(first!=NULL || second!=NULL || carry!=0){
            int val1=0;
            if(first!=NULL){
                val1=first->data;
            }
            int val2=0;
            if(second!=NULL){
                val2=second->data;
            }
            int sum=carry+val1+val2;
            int digit=sum%10;
            insertAtTail(ansHead,ansTail,digit);
            carry=sum/10;
            
            if(first!=NULL)first=first->next;
            if(second!=NULL)second=second->next;
        }
        return ansHead;
    }
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
       first=reverse(first);
       second=reverse(second);
       
       Node* ans=addNodes(first,second);
       
       ans=reverse(ans);
       while((ans->data)==0&&ans->next!=NULL){
           Node* temp=ans;
           delete(temp);
           ans=ans->next;
       }
       
       return ans;
    }
};