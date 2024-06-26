#include <iostream>
#include <string>
using namespace std;

bool PatternInString(string &s1, string &s2){

    cout << s2.find(s1) << " ";

    if(s2.find(s1)){
        return true;
    }
    else{
        return false;
    }
}

int main()
{

string s1,s2;
cout<<"S1:";
cin>>s1;
cout<<"S2:";
cin>>s2;
bool ans=PatternInString(s1,s2);
if(ans){
    cout<<"Permutation of s1 present in s2.";
}
else{
    cout<<"Permutation of s1 not present in s2.";
}

return 0;
}