#include <iostream>
#include <string>
using namespace std;

int main()
{
string s;
cin>>s;
string part;
cin>>part;
while ((s.length()!=0 && s.find(part)<s.length()))
{
    s.erase(s.find(part),part.length());
}
cout<<"Now string is: "<<s;


return 0;
}