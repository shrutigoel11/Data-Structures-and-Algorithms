#include <iostream>
using namespace std;

class Hero{
    // private:  --->can't be declared;
    // Hero(){
    //     cout<<"Constructor is called privately.";
    // }
    public:
    //Deafault
    Hero(){
        cout<<"Constructor is called publically."<<endl;
    }
    ~Hero(){
        cout<<"Destructor is called publically."<<endl;
    }
} ;

int main()
{
    cout<<"Entry"<<endl;
Hero ramesh;
    cout<<"Exit"<<endl; 

return 0;
}