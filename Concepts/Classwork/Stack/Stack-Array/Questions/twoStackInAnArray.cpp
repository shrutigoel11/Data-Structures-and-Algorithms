#include <iostream>
using namespace std;

class TwoStack{
    public:
    int top1;
    int top2;
    int size;
    int *arr;

    TwoStack(int size){
        this->size=size;
        arr=new int[size];
        top1=-1;
        top2=size;
    }
    //Push in stack 1
    void push1(int val1){
        if(top2-top1>1){
            top1++;
            arr[top1]=val1;
        }
        else{
            cout<<"Stack Overflow";
        }

    }

     //Push in stack 2
    void push2(int val1){
        if(top2-top1>1){
            top2++;
            arr[top2]=val1;
        }
        else{
            cout<<"Stack Overflow";
        }
        
    }
      //Pop in stack 1
   int pop1(){
        if(top1>=0){
            int ans=arr[top1];
            top1--;
            return ans;
        }
        else{
            cout<<"Stack Underflow";
            return -1;
        }
    }
       //Popin stack 2
    int pop2(){
        if(top2<size){
            int ans=arr[top2];
            top1--;
            return ans;
        }
        else{
            cout<<"Stack Underflow";
            return -1;
        }
        
    }
};