#include <iostream>
using namespace std;

int main()
{
//When we try to violate range in char it takes last random char and return ASCII value
char a=23452;
cout << a<<endl;
int r=24;
cout<<char(r)<<endl;  // (type)expression -> explicit
char ch='g';
int c=ch+9;   // implicit
cout<<c;
return 0;
}