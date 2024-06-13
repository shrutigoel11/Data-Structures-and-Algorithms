
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

int main()
{
Male m1;
m1.eat();
m1.speak(); // inherited all behaviour and property of human
m1.setcolorOfEyes("Red");
cout<<m1.color;
return 0;
}