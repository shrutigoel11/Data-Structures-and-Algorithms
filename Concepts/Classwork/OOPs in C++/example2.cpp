#include <iostream>
using namespace std;


class Hero{
    private:
    int health;
    public:
    int getHealth(){
        return health;
    }
    void setHealth(int h){
        health=h;
    }
};

int main()
{

Hero ramesh; //SMA
ramesh.setHealth(70);
cout<<ramesh.getHealth()<<endl;

//DMA  use  (*ptr).property or ptr->property 
Hero *h=new Hero();
h->setHealth(80);
cout<<(*h).getHealth();
return 0;
}