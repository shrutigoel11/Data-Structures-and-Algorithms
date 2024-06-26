#include <iostream>
using namespace std;

class Queue{
    private:
        int *arr;
        int *front;
        int *rear;
        int size;
    public:
        Queue(int size){
            this.size=size;
            arr=new int(size);
            front=0;
            rear=0;
         }
        
        bool isEmpty(){
            if(front==rear){
                return 1;
            }
            return 0;
        }
        int front(){
            if(rear==front){
                return -1;
            }
            else{
                return arr[front];
            }
        }

        void enqueue(int value){
            if(rear==size){
                cout<<"Queue is full";
                return ;
            }
            arr[rear]=value;
            rear++;
        }

        int dequeue(){
            if(rear==front){
                return -1;
            }
            else{
                int del=arr[front];
                arr[front]=-1;
                front++;
                if(front==rear){
                front = 0;
                rear = 0;
            }
              return del;
                }
            }
};

int main()
{



return 0;
}