//Given:array check whether any element is duplicate or not if yes then return false;
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int>  Frequency( vector<int>& nums){
    int freq[1001]={0};
    for(int i=0;i<nums.size();i++){
        freq[nums[i]]++;
    }
    vector<int> dupes;
    for(int i=0;i<1001;i++){
        if(freq[i]>1){
            dupes.push_back(i);
        }
    }
    return dupes;
}

int main()
{
    cout << "Enter n : ";
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];

        cout << arr[i]<<" ";
    }
        vector<int> result=Frequency(arr);
    for(auto i: result){
        cout << result[i]<<" ";
    }


    return 0;
}