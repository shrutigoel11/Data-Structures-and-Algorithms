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
vector<int> prevSmallerElement(vector<int> &arr, int n)
{
   stack<int>s;
   s.push(-1);
   vector<int>ans(n);
   for(int i=0;i<n;i++){
       int curr=arr[i];
       while(s.top()>=curr){
           s.pop();
       }
       ans[i]=s.top();
       s.push(curr);
   }
   return ans;
}

int largestRectangleArea(vector<int>& heights){
    int n=heights.size();
    vector<int>ans(n);
            vector<int> next(n);
        next = nextSmallerElement(heights, n);
            
        vector<int> prev(n);
        prev = prevSmallerElement(heights, n);
         int area = 0;
        for(int i=0; i<n; i++) {
            int l = heights[i];
            
            if(next[i] == -1) {
                next[i] = n;
            }
             int b = next[i] - prev[i] - 1;
            int newArea = l*b;
            area = max(area, newArea);
        }
        return area;
    }

int main()
{
vector<int> arr={1,2,4,3};
int area=largestRectangleArea(arr);

cout<<area;
return 0;
}