
#include <iostream>
#include <string.h>
using namespace std;

class Human{
    private:
    //private data members of any class aren't accessible
    int brain;
    public:
    char color[10];
    void speak(){
        cout<<"I can speak"<<endl;
    }
     void setcolorOfEyes(char color[]){
        strcpy(this->color,color); 
    }
};
class Male: public Human{ //---> inherited publically
 public:
 void eat(){
    cout<<"I can eat"<<endl;
 }

}; 

class Ramesh: public Male{
      public:
      void dance(){
        cout<<"I can dance"<<endl;
      }
};

int main()
{
Ramesh r1;
r1.eat();
r1.speak(); // inherited all behaviour and property of human
r1.setcolorOfEyes("Red");
cout<<r1.color<<endl;
r1.dance();
return 0;
}