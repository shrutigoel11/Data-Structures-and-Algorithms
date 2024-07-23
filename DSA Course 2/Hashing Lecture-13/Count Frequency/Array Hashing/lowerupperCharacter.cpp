#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
string s;
cout<<"Enter character string: ";
cin>>s;
//precompute
int hash[256]={0};
for(int i=0;i<s.size();i++){
    hash[s[i]]++; // to set alphabets on hash array indices
}
int q;
cout<<"Enter query count: ";
cin>>q;
while(q--){
    char c;
    cout<<"Enter character: ";
    cin>>c;
    cout<<hash[c]<<endl;
}


return 0;
}