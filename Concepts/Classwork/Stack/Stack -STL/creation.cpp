#include <iostream>
#include <stack>
using namespace std;

int main()
{
stack<int>s;

//Push
s.push(9);
s.push(8);
s.push(9);
s.pop();

cout<<s.top()<<endl;
if(s.empty()){
    cout<<"Stack is empty"<<endl;
}
else{
    cout<<"Stack is not empty"<<endl;
}

return 0;
}