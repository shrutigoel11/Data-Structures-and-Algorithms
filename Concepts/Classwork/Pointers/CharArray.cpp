#include <iostream>
using namespace std;

int main()
{
int arr[]={1,2,23,4,5};
char ch[6]="abcde";

cout<<arr <<endl; //base address
cout<< ch<<endl; // entire char array till "\0" found;

char temp='z';
char *ptr= &temp;
cout<<*ptr<<endl; // when no null char found
cout<<ptr<<endl; 
return 0;
}