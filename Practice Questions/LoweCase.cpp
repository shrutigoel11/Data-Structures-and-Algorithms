#include <iostream>
using namespace std;

string toLowerCase(string &s) {
        for(int i=0;i<s.length();i++){
           if(s[i]>='A'&& s[i] <='Z'){
            s[i]+='a'-'A';
        }
        }
        return s;
    }

int main()
{

string s="ShRuTi";
toLowerCase(s);
for(int i=0;i<s.length();i++){
    cout<<s[i];
}

return 0;
}