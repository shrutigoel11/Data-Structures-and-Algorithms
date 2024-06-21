#include <iostream>
#include <stack>
#include <vector>
using namespace std;
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
   stack<int>s;
   s.push(-1);
   vector<int>ans(n);
   for(int i=n-1;i>=0;i--){
       int curr=arr[i];
       while(s.top()>=curr){
           s.pop();
       }
       ans[i]=s.top();
       s.push(curr);
   }
   return ans;
}
int main()
{
vector<int> arr={1,2,4,3};
vector<int>ans=nextSmallerElement(arr,arr.size());
for(auto i:ans){
    cout<<i<<" ";
}

return 0;
}