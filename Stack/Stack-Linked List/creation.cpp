#include <iostream>
using namespace std;

class Stack{
    public:
    int data;
    Stack* next;
    Stack(int data){
        this->data=data;
        this->next=NULL;
        }
    // ~Stack(){
    //     if(next!=NULL){
    //         delete next;
    //         next=NULL;
    //     }
    
};
void addElement(Stack*&top,int data){
    Stack * newnode=new Stack(data);
    if(top==NULL){
        top=newnode;
    }
    else{
        newnode->next=top;
        top=newnode;
    }

}
void deleteElement(Stack*&top){
    if(top==NULL){
        return;
    }
    else{
        Stack*temp=top;
        top=top->next;
        free(temp);
    }

}
void Print(Stack*&top){
    Stack* temp=top;
    while ((temp!=NULL))
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"->NULL";
}
int main()
{

Stack* top=NULL;
addElement(top,1);
 addElement(top,2);
  addElement(top,3);
//  deleteElement(top);
//   // Check if top is NULL before accessing data
// if (top != NULL) {
//     cout << "Top of the stack: " << top->data << endl;
// } else {
//     cout << "Stack is empty." << endl;
// }
Print(top);
return 0;
}