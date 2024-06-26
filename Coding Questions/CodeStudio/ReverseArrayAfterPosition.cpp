#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> ReverseArray(vector<int> &v ,int n,int m) {
        int s=m+1;
        int e=n-1;
        while(s<=e){
            swap(v[s],v[e]);
            s++;
            e--;
        }
        return v;
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
}
cout<<"Before sorting:";
for(int i=0;i<n;i++){
     cout<<v[i]<<" ";
}cout<<endl;

int m;
cout<<"Enter index after which you want to reverse:";
cin>>m;

vector<int> ans=ReverseArray(v,n,m);
cout<<"After sorting:";
for(int i=0;i<n;i++){
     cout<<ans[i]<<" ";
}

return 0;
}