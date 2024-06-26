#include <iostream>
using namespace std;

// Redinition of maethod of parent class in subclass -->only through inheritance , same parameter, same name, public acces modifier

class Parent{
    public:
    void print(){
        cout<<"I am parent";
    }
};
class Child:public Parent{
    public:
    void print(){
        cout<<"I am child";
    }
};


int main()
{
Child c;
c.print();

return 0;
}