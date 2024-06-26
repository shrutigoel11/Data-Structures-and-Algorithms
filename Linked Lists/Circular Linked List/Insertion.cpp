#include <iostream>
using namespace std;
//We use only one tail ptr no head
class node{
    public:
    int data;
    node *next;

    node(int data){
        this->data=data;
        this->next=NULL;
    }
    ~node(){
    if(next!=NULL){
        delete next;
        next=NULL;
    }
  }
};
//no start no end 
void insert(node* &tail, int element , int data){
    //empty list when tail==NULL
    if(tail==NULL){
        node* temp=new node(data);
        tail=temp;
        temp->next=temp;
    }
    else{
        //non empty list
        //assuming element is present
        node* curr=tail;
        while(curr->data!=element){
            curr=curr->next;
        }
        //element found-->curr is pointing element
        node* temp=new node(data);
        temp->next=curr->next;
        curr->next=temp;
    }
}


    void print(node* tail) {

    node* temp = tail;

    //empty list
    if(tail == NULL) {
        cout << "List is Empty "<< endl;
        return ;
    }

    do {
        cout << tail -> data << " ";
        tail = tail -> next;
    } while(tail != temp);

    cout << endl;
}


int main()
{
node* tail=NULL;
insert(tail,2,2);
insert(tail,2,6);
print(tail);

return 0;
}