#include <iostream>
using namespace std;

int main()
{
int num=5;
int* ptr1=&num;
int ** ptr2=&ptr1;  //Double ptr

//ADDRESS OF NUM
cout<<"Address of num:"<<ptr1<<endl;  //stored by ptr 1
cout<<"Address of num:"<<&num<<endl;
cout<<"Address of num:"<<*ptr2<<endl<<endl; ; //value stored by ptr1-->address of num

//VALUE OF NUM
cout<<"Value of num:"<<num<<endl; 
cout<<"Value of num:"<<*ptr1<<endl;  //dereference ptr1
cout<<"Value at address stored by ptr1:"<<**ptr2<<endl<<endl; ;//value of num as * ptr2-->value in ptr1 and ** ptr2--> value at (value in address stored by ptr1)

//ADDRESS OF PTR1
cout<<"Address of ptr1:"<<&ptr1<<endl; //&
cout<<"Address of ptr1:"<<ptr2<<endl<<endl; ; //stored by ptr2

//ADDRESS OF PTR2
cout<<"Address of ptr2:"<<&ptr2<<endl<<endl; ; //address of ptr2

//VALUE AR PTR2-->ADDRESS STORED BY PTR1
cout<<"Value of ptr2:"<<*ptr2<<endl<<endl; ; //PTR2 ME ADDRESS OF PTR1 AUR USKI VALUE :ADDRESS OF NUM;


return 0;
}