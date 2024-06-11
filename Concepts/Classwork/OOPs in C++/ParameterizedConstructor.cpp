#include <iostream>
using namespace std;
class Hero{
    private:
    int health;
    public:
    //parameterized
    // this stores address of object.
     Hero(int health){
        cout<<"this->"<<this<<endl;  // this stores address of object verified.
        this->health=health;  // object ki health me i/p health daldo
    }
    int getHealth(){
        return health;
    }
    void setHealth(int h){
        health=h;
    }

};

int main()
{
Hero ramesh(9); // parameterized constructor called pass value in object
cout<<"Address of ramesh:"<<&ramesh<<endl;  // equals to this
cout<<ramesh.getHealth()<<endl;

return 0;
}