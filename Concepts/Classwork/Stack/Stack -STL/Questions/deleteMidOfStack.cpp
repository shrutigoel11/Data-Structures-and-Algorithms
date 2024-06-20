#include <iostream>
#include <stack>
#include <vector>
using namespace std;
void solve(stack<int>&inputStack, int count , int size){

   //Base Case
   if(count==size/2){
      inputStack.pop();
      return;
   }
   //ek case solve karlo
   int num=inputStack.top();
   inputStack.pop();
   //recursion
   solve(inputStack,count+1,size);
   //ab wapas jate ve add num in stack
   inputStack.push(num);
}
void deleteMiddle(stack<int>&inputStack, int N){
	int count=0;
   solve(inputStack,count,N);
   
}
int main()
{
stack<int>s;
s.push(1);
s.push(2);
s.push(3);
s.push(4);
deleteMiddle(s,s.size());

vector<int>arr;
while(!s.empty()){
    arr.push_back(s.top());
    s.pop();
}
for(auto i:arr){
    cout<<i<<" ";
}

return 0;
}