#include <iostream>
using namespace std;
// class definition 
class Hero{

    public: // by default private  so to access health outside we need public access modifier or use getter / setter --> example 2
    int health;
};
int main()
{
// object creation of type ->class i.e. hero type ka object
Hero ramesh;
cout<<ramesh.health; // garbage value

return 0;
}