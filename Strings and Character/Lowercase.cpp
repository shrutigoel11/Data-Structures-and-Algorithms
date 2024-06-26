#include <iostream>
#include <algorithm>
using namespace std;
char Lowercase(char ch){
      if(ch>'a' && ch<='z'){
        return ch;
      }
      else{
        ch=ch-'A'+'a';
      }
      return ch;
}

int main()
{

char ch;
cin>>ch;
cout<<Lowercase(ch);

return 0;
}