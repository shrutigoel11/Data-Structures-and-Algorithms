#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int n=arr.size();
        vector<int> temp;
        for(int i=0;i<n;i++){
            if(arr[i]!=0){
                temp.push_back(arr[i]);
            }
        }
        for(int i=0;i<temp.size();i++){
            arr[i]=temp[i];
        }
        for(int i=temp.size();i<n;i++){
            arr[i]=0;
        }
    }
};

int main()
{



return 0;
}
