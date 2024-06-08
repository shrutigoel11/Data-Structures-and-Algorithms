#include <iostream>
using namespace std;

// void update(int n){   ---> pass by value o/p before: 5 after :5
//     n++;
// }

void update( int &n){  // reference variable created
 n++;
}

int main()
{

int n=5;
cout<<"Before:"<<n<<endl;
update(n);
cout<<"After:"<<n<<endl;
return 0;
}