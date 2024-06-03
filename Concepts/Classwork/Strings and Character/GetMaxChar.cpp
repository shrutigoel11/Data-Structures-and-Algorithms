#include <iostream>
#include <string>
using namespace std;

char GetMaxChar(string s){
    int arr[26]={0};
    for(int i=0;i<s.length();i++){
          char ch=s[i];
            int num=0;
          if(ch>='a' && ch<='z'){
                num=ch-'a';
          }
          else{
                num=ch-'A';
          }
          arr[num]++;
    }

    int maxi=-1,ans=0;
    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
    }
    char Final=ans+'a';
    return Final;
}

int main()
{

string s;
cout<<"Enter your string:";
getline(cin, s); // Read entire line including whitespaces
char ans=GetMaxChar(s);
cout<<"Maximum character that has occured is:"<<ans;

return 0;
}