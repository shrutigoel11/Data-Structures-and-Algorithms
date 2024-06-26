#include <iostream>
using namespace std;

int LengthOfString(char name[]){
     int count=0;
     for(int i=0;name[i]!=0;i++){
       count ++;
    }
    return count;
}

int main()
{
char name[20];

cout<<"Enter your name: ";
cin>>name;
int size=LengthOfString(name);
cout<<size;

return 0;
}