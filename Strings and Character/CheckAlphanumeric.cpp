#include <iostream>
using namespace std;

bool isAlphanumeric(char c) {
    return isalnum(c);
}

int main()
{

char name[20];

cout<<"Enter your name: ";
cin>>name;

cout<<"Your name is:";
cout<<name;

isAlphanumeric(name[2]);
if(isAlphanumeric){
    cout<<"\nYes";
}
else{
    cout<<"No";
}
return 0;
}