#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

Node* middle(Node*&head){
    Node* fast=head->next;
    Node* slow=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

Node* merge(Node*&left,Node*&right){
    Node* ans=new Node(-1);
    Node*temp=ans;

    while(left!=NULL && right!=NULL){
        if(left->data<right->data){
            temp->next=left;
            temp=left;
            left=left->next;
        }
        else{
            temp->next=right;
            temp=right;
            right=right->next;
        }
    }
    while(left!=NULL){
        temp->next=left;
            temp=left;
            left=left->next;       
    }
    while(right!=NULL){
            temp->next=right;
            temp=right;
            right=right->next;
        }
        ans=ans->next;
        return ans;

}

 Node* MergeSort(Node*&head){
    //Base case
    if(head==NULL|| head->next==NULL){
        return head;
    }

    Node* mid=middle(head);
    //Step 1: Divide the linked list in two halves
    Node* left=head;
    Node* right=mid->next;
    mid->next=NULL;

    //Step 2:Sort them recursively by middle
    left=MergeSort(left);
    right=MergeSort(right);

    //Step 3:Merge them
    Node* result=merge(left,right);

    //Step 4:Return ans
    return result;
}

int main()
{




return 0;
}