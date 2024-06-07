#include <iostream>
using namespace std;

int main()
{

int arr[]={23,122,41,67};
int *p= &arr[0];   // pointer cant be assignes as &arr
cout<<sizeof(arr)<<endl;  //4*4
cout<<sizeof(p)<<endl;    //4
cout<<sizeof(*p)<<endl; 
cout<<sizeof(&p)<<endl;  //4

//address
cout<<p<<endl; //address pointed by p
cout<<*p<<endl; //value at address pointed by p
cout<<&p<<endl; //address of p
return 0;
}