#include <iostream>
#include <stack>
#include <vector>
using namespace std;
void solve(stack<int>& s, int x){

    //Base Case
    if(s.empty()){
        s.push(x);
        return;
    }

    //top store karwalo
    int num=s.top();
    //top ko delete
    s.pop();
    //Recursive call
    solve(s,x);
    
    //ab jate ve element lete jao
    s.push(num);
}
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
   solve(myStack,x);
   return myStack;
}
int main()
{
stack<int>s;
s.push(1);
s.push(2);
s.push(3);
s.push(4);
stack<int>ans=pushAtBottom(s,0);
while (!ans.empty()) {
        cout << ans.top() << " ";
        ans.pop();
}

return 0;
}