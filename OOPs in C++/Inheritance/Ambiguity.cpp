
#include <iostream>
#include <string.h>
using namespace std;

class Human{

    public:
    void eat(){
    cout<<"I can eat humanly"<<endl;
 }
};
class Male { //---> inherited publically
 public:
 void eat(){
    cout<<"I can eat like a male"<<endl;
 }

}; 

class Ramesh: public Male, public Human{ 
};

int main()
{
    // to avoid ambiguity use ::
Ramesh r1;
r1.Human::eat();
r1.Male::eat();

return 0;
}