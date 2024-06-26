#include <iostream>
#include <unordered_set>
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

void newnode(Node*& head,Node*& tail,Node*& node){
if(head==NULL){
head=node;
}
else{
tail->next=node;
}
tail=node;
}
Node *removeDuplicates(Node *head)
{
    Node* newHead=NULL;
    Node* newTail=NULL;
    Node* itr=head;
    unordered_set<int>st;
    
    while(itr!=NULL){
        int val=itr->data;
        
        if(st.find(val)==st.end()){
            newnode(newHead,newTail,itr);
            st.insert(val);
        }
        itr=itr->next;
    }
newTail->next=NULL;
 return newHead;
}

int main()
{



return 0;
}