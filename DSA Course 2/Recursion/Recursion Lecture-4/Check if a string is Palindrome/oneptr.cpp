#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool f(int i,string s){
    if(i>=6/2) return true;
    if(s[i]!=s[6-i-1]) return false; // if not same then return false
    return f(i+1,s);

}

int main()
{

string s="madame";
if(f(0,s)){
    cout<<"It is a palindrome";
}
else{
    cout<<"It's not a palindrome";
}

return 0;
}