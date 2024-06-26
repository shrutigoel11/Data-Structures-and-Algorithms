#include <iostream>
using namespace std;

int main()
{
int arr[]={23,122,41,67};

cout<<"Base Address:"<< arr<<endl;  // arr holds base address
cout<<"Base Address:"<<&arr[0]<<endl; //&arr[0] is same as arr
cout<<"Base Address:"<<&arr<<endl;    // &arr is same as arr as &means address

cout<<"Value at Base Address:"<<*(arr)<<endl;//value at base address

cout<<"Value at First:"<<*(arr+1)<<endl; //1sr position

cout<<"Value at Second:"<<*(arr+2)<<endl; //arr points to block after 2 positions 
// addition in ptr means 4 position after memory block;

//new concept
int i=2;
cout<<i[arr]<<endl;  //no error it is also possible
cout<<*(i+arr)<<endl;

return 0;
}