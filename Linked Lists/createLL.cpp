#include <iostream>
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
int main()
{
// create object by dma
node *head=NULL;
node *newnode=new node(10);  // newnode is ptr
cout<<"Data:"<<newnode->data<<endl;
cout<<"Address:"<<newnode->next<<endl;
head=newnode;
return 0;
}