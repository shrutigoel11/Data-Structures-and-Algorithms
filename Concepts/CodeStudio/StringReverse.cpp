#include <iostream>
using namespace std;
//can use two ptr also

void reverse(string &s,int i){
    int n=s.length()-i-1;
    if(i>n)
        return ;
    
    int temp=s[i];
    s[i]=s[n];
    s[n]=temp;
    i++;
    n--;
    reverse(s,i);
    
}

int main()
{

string s="abcde";
reverse(s,0);
cout<<s; 
return 0;
}