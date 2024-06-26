#include <iostream>
using namespace std;

int main()
{
int num=5;
cout<<"Before:"<<num<<endl;
int *p=&num;
(*p)++;
cout<<"After:"<<num;


return 0;
}