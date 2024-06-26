#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
 //m:students arr:array of books  n: no. of pages
bool isPossible(vector<int> arr, int n, int m, int mid) {
    int studentCount = 1;
    int pageSum = 0;
    //cout << "checking for mid "<< mid <<endl;
    
    for(int i = 0; i<n; i++) {
        if(pageSum + arr[i] <= mid) {
            pageSum += arr[i];
        }
        else
        {
            studentCount++;
            if(studentCount > m || arr[i] > mid ) {
            return false;
        }
            pageSum = arr[i];
        }
        if(studentCount > m) {
            return false;
        }
        //cout << " for i " << i << " Student "<< studentCount << " pageSum " << pageSum << endl;
    }
    return true;
}

int allocateBooks(vector<int> arr, int n, int m) {
    int s = 0;
    int sum = 0;
    
    for(int i = 0; i<n; i++) {
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e-s)/2;
    
    while(s<=e)
    {
        if(isPossible(arr,n,m,mid)) {
            //cout<<" Mid returned TRUE" << endl;
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}


int main()
{
    int n;
    cout<<"Enter no. of pages in books: ";
    cin>>n;
    int m;
    cout<<"Enter no. of students: ";
    cin>>m;
vector <int> books(n);
cout << "Enter pages in each book: ";
for(int i=0;i<n; i++){
    cin>>books[i];
}
int ans=allocateBooks(books,  n,  m);
 cout << "The minimum number of pages a student has to read is: " << ans << endl;

return 0;
}