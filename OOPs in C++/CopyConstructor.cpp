#include <iostream>
using namespace std;
class Hero{
    private:
    int health;
    public:
    //parameterized
     Hero(int health){
        this->health=health;  
    }
    //copy constructor -->default hota hai par apna bhi create kar skte h  
    Hero(Hero &ramesh){  // as we are passing object as parameter and use & to not get in infinite loop as copy value in call by value so copy constructor called and from parameter to copy constructor and infinitely
    this->health=ramesh.health;  // in ramesh use . as it is not ptr.
    cout<<"Copied value"<<endl;
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
cout<<ramesh.getHealth()<<endl;


Hero copy(ramesh); // copy one obj in other
cout<<copy.getHealth()<<endl;
return 0;
}