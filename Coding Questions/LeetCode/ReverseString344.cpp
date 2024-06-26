#include <iostream>
#include<algorithm>
using namespace std;

int LengthOfString(char name[]){
     int count=0;
     for(int i=0;name[i]!=0;i++){
       count ++;
    }
    return count;
}
void ReverseString(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
     swap(name[s++],name[e--]);
    }
}

int main()
{
char name[20];

cout<<"Enter your name: ";
cin>>name;
int size=LengthOfString(name);
ReverseString(name,size);
cout<<"After Reversing: "<<name;
return 0;
}