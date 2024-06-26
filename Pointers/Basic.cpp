#include <iostream>
using namespace std;

int main()
{


int num=5;
cout<<num <<endl;
num++;
int *p=&num;
cout<<"Address of p:"<<p <<endl; //address
cout<<"Value at address pointed by p:"<<*p<<endl; // value at address ->dereferencing operator

//size 
cout<<"Size of num:"<<sizeof(num)<<endl;
cout<<"Size of p:"<<sizeof(p)<<endl;

//null ptr
int i=5;
int *ptr=0;
int *q=&i;  // two pointers can point to same variable
ptr=&i;
cout<<"Address of ptr:" <<ptr<<endl;
cout<<"Value at address pointed by ptr:"<<*ptr<<endl;
cout<<"Address of ptr:" <<q<<endl;

return 0;
}