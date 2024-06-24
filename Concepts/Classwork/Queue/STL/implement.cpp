#include <iostream>
#include <queue>
using namespace std;



int main()
{
queue<int>q;

//push
q.push(8);
q.push(9);
//front
cout<<"Front:"<<q.front()<<endl;

//pop
q.pop();

//isEmpty
if(q.empty()){
    cout<<"Queue is empty"<<endl;
}
else{
    cout<<"Queue is not empty"<<endl;
}



return 0;
}