#include <iostream>
using namespace std;

void update1(int *p){
   *p=*p+1;   //value at address pointed by p i.e. 5 ++ -->6
   cout<<*p <<endl;
}
void update2(int **p2){
     cout << *p2<<endl;
   *p2=*p2+1;   //value at address pointed by p2 i.e. address of num ++ 
//    cout<<*p2<<endl;
    cout << *p2<<endl;
    cout << **p2<<endl;

   **p2=**p2+1;  //value at (value at address pointed by p1) i.e. num
    cout<<**p2  <<endl;
}

int main()
{

int num=5;
int*p=&num;
int**p2=&p;
cout<<"Before:"<<endl;
cout<<*p<<endl;
cout<<p<<endl;
cout<<**p2<<endl<<endl;

cout<<"After"<<endl;
update1(p);

update2(p2);

return 0;
}