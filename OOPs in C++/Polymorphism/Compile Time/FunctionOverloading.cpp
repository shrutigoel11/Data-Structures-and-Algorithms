#include <iostream>
using namespace std;

class A{

    public:

    void sayHi(){
        cout<<"Hello"<<endl;
    }
    void sayHi(string name){
        cout<<"Hello "<<name<<endl;
    }

};

int main()
{

A a1;
a1.sayHi();
a1.sayHi("Shruti");

return 0;
}