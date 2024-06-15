#include <iostream>
#include<map>
using namespace std;
class node{
    public:
    int data;
    node *next;

    node(int data){
        this->data=data;
        this->next=NULL;
    }
};

bool detectLoop(node*&head){
    if(head==NULL){
        return false;
    }
    map<node*,bool>visited;
    node*temp=head;
    while(temp!=NULL){
        //cycle present
        if(visited[temp]==true){
            return true;
        }
        visited[temp]=true;
        temp=temp->next;
    }
    return false;
}