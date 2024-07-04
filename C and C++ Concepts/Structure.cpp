#include <iostream>
using namespace std;

struct Rectangle 
{
    int length;
    int breadth;
};

int main()
{
struct Rectangle r1={10,5};
cout<<sizeof(r1)<<" bytes";
cout<<endl<<r1.length<<endl<<r1.breadth<<endl;
r1.length=15;
r1.breadth=10;
cout<<r1.length<<endl<<r1.breadth;

return 0;
}