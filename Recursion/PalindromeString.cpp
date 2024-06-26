#include <iostream>
using namespace std;

bool palindrome(string &str,int i,int j){
    if(i>=j){
        return 1;
    }
     
    if(str[i]!=str[j]){
        return 0;
    }
        palindrome(str,i+1,j-1); 
}

int main()
{
string s="abba";
if(palindrome(s,0,s.length()-1)){
    cout<<"PALINDROME";
}
else{
     cout<<"NOT A PALINDROME";
}


return 0;
}