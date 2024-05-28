#include <iostream>
#include <algorithm>
using namespace std;

void PrintArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

void InputArray(int arr[], int n) {
    cout << "Enter array elements as 0/1/2: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

void SortOne(int arr[], int n) {
    int left = 0, right = n - 1;
    while (left <= right) {
        if(arr[left]==0 && left<right){
            left++;
        }
        else if(arr[right]==2 && left<right){
            right--;
        }
        else if(arr[left]==2 && arr[right]==0 && left<right){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
        else if(arr[left]==1 && arr[right]==0 && left<right){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
        else if(arr[left]==2 && arr[right]==1  && left<right){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }

        else{
            left++;
            right--;
        }
    }
    PrintArray(arr, n);
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    int arr[n];
    InputArray(arr, n);
    cout << "Array before sorting: ";
    PrintArray(arr, n);
    cout << endl;
    cout << "Array after sorting: ";
    SortOne(arr, n);

    return 0;
}