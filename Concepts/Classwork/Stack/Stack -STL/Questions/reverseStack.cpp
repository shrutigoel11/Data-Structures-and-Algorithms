#include <iostream>
#include <stack>
#include <vector>
using namespace std;
void solve(stack<int>& s, int x){
    if(s.empty()){
        s.push(x);
        return;
    }
    int num=s.top();
    s.pop();
    solve(s,x);
    s.push(num);
}
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
   solve(myStack,x);
   return myStack;
}

void reverseStack(stack<int> &stack) {
    if(stack.empty()){
        return;
    }
    int topelement=stack.top();
    stack.pop();
    reverseStack(stack);
    pushAtBottom(stack,topelement);
}
int main()
{
stack<int>s;
s.push(1);
s.push(2);
s.push(3);
s.push(4);
stack<int>ans=s;
cout<<"Orignal stack:";
while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
}cout<<endl;
reverseStack(ans);
cout<<"Reversed stack:";

while (!ans.empty()) {
        cout << ans.top() << " ";
        ans.pop();
}

return 0;
}