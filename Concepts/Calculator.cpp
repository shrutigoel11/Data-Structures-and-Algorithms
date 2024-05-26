#include <iostream>
using namespace std;

int main()
{
int a,b,op;
cout<<"Enter two numbers: ";
cin>> a >> b;
cout<<"Select operation:\n 1.Addition \n 2.Subtraction \n 3.Division \n 4.Modulo \n 5.Multiplication\n";
cin>>op;
switch(op){
                case 1: cout<<"Answer is: "<<a+b;
            break;
                case 2: cout<<"Answer is: "<<a+b;
            break;
                case 3: cout<<"Answer is: "<<a-b;
            break;
                case 4: cout<<"Answer is: "<<a%b;
            break;
                case 5: cout<<"Answer is: "<<a*b;
            break;
                default:cout<<"Invalid Operation!";
}

return 0;
}