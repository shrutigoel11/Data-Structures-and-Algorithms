#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
int A[5];
//Add elements by refering to index;
A[0]=12;
A[1]=23;
A[2]=4;
A[3]=6;
A[4]=5;

//CHECK SIZE BY sizeof() OPERTAOR --> 4*5 as int take 4 bytes of memeory for each element
cout<<"Size of A: "<<sizeof(A)<<endl;
cout<<A[0]<<endl;
printf("%d\n",A[2]);

//CHECK SIZE OF ARRAY WHOSE SIZE IS UNDEFINED--> 
int B[]={1,2,34,5};
cout<<"Size of B: "<<sizeof(B)<<endl;
//REST ELEMENTS ARE ZERO WHEN FEW ELEMENTS ARE INITIALSED;
int C[10]={1,3,5};
cout<<"Elements of C: ";
//FOR LOOP TO PRINT ALL ELEMENTS OF AN ARRAY;
for (int i = 0; i <10; i++)
{
    cout<<" " <<C[i];
}
cout<<endl;
//FOREACH LOOP 
for(int x:C)
{
    cout<<" "<<x;
}
//Taking Input Array
int n;
cout<<"\n"<<"Enter size of array:";
cin>>n;
int D[n];
cout<<"Enter Elements:";
for(int i =0; i<n;i++)
{
    cin>>D[i];
}
for(int i =0; i<n;i++)
{
    cout<<D[i];
}

return 0;
}