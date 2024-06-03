#include <iostream>
#include <string>
using namespace std;

string ReplaceSpaces(string &s){
    string temp=" ";
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            temp.push_back('@');
             temp.push_back('4');
              temp.push_back('0');
        }
        else{
             temp.push_back(s[i]);
        }
    }
    return temp;
}

int main()
{

string s;
cout<<"Enter your string:";
getline(cin, s); // Read entire line including whitespaces
string ans=ReplaceSpaces(s);
cout<<"String is:"<<ans;

return 0;
}