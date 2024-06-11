#include <iostream>
using namespace std;

string toLowerCase(string &s) {
        for(int i=0;i<s.length();i++){
           if(s[i]>='a'&& s[i] <='z'){
            s[i]+='A'-'a';
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