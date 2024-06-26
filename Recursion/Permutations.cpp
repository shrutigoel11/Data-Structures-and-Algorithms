#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void solve(vector<int>&nums,vector<vector<int>>&ans,int i){
      // base case likho
      if(i>=nums.size()){
        ans.push_back(nums);
        return;
      }
      //swap kakr ek case baki recursion
      for(int j=i;j<nums.size();j++){
        swap(nums[i],nums[j]);
        solve(nums,ans,i+1);
        //backtrack kro taki next pass me i ke sath orignal string pass ho naki ans wali changed->firse swap krdo
        swap(nums[i],nums[j]);
      }
}


vector<vector<int>> permutations(vector<int>&nums){
   vector<vector<int>>ans;
   int i=0;
   solve(nums,ans,i);
   return ans;
}

int main()
{



return 0;
}