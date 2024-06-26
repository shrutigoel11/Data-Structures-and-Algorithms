#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(vector<int> &Boards,int n, int k,int mid){
    int PainterCount=1;
    int BoardSum=0;
    for(int i=0;i<n;i++){
        if(BoardSum+Boards[i]<=mid){
            BoardSum+=Boards[i];
        }
        else{
            PainterCount++;
            if(Boards[i]>mid || BoardSum> mid){
                return false;
            }
            
        }
        BoardSum=Boards[i];
    }
    return true;
}

int findLargestMinDistance(vector<int> &Boards,int n, int k)
{
    int l=0;
    int sum=0;
    int ans=-1;
    for(int i=0; i<n; i++){
        sum+=Boards[i];
    }
    int h=sum;
    while(l<=h){
        int mid=(l+h)/2; // Corrected the calculation here
        if(isPossible(Boards,n,k,mid)){
           ans=mid;
           h=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return ans;
}



int main(){
int k,n;
cout<<"Enter no. of painters: ";
cin>>k;
cout<<"Enter no. of boards: ";
cin>>n;

vector<int> Boards(n);
cout<<"Enter length of each board:";
for(int i=0;i<n;i++)
{
    cin>>Boards[i];
}
int ans=findLargestMinDistance(Boards,n,k);
cout<<"Largest Minimum Distance is:"<<ans;
    return 0;
}