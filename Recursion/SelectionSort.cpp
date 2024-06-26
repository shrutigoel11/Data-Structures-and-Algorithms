#include <iostream>
#include <algorithm>
using namespace std;

void sort(int arr[], int n) {
    if (n <= 1) {
        return;
    }
    
    // Find the minimum element in the array
    int minIndex = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }

    // Swap the minimum element with the first element
    swap(arr[minIndex], arr[0]);

    // Sort the remaining elements (excluding the first one)
    sort(arr + 1, n - 1);
}
int main()
{

int arr[]={1,10,4,3};
cout<<"Before: ";
for(int i=0;i<4;i++){
    cout<<arr[i]<<" ";
}cout<<endl;
sort(arr,4);
for(int i=0;i<4;i++){
    cout<<arr[i]<<" ";
}

return 0;
}