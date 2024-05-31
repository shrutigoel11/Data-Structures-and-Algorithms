#include <iostream>
#include <vector>
using namespace std;
void rotate(vector<int>& nums, int k) {
      
    // just to practice the modulus approach
      int n = sizeof(nums);
      vector<int> temp(n);
      
      
      for(int i =0;i<n;i++) {
        
        temp[(i+k)%n] = nums[i];
        
      }
      
      
      for(int i=0;i<nums.size();i++) 
      {
        nums[i] = temp[i];
      }
      
    }

int main()
{
    int n;
cout<<"Enter size :";
cin>>n;
cout<<"Enter elements:";
vector<int> v(n);

for(int i=0;i<n ;i++){
    cin>> v[i];
};
    int k;
cout<<"Enter value by which you want to move :";
cin>>k;
rotate(v,k);
for(int i=0;i<n ;i++){
     cout<<v[i]<<" ";
}


return 0;
}