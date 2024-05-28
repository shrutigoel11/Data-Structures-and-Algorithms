#include <iostream>
#include <algorithm>
using namespace std;

void PrintArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

void InputArray(int arr[], int n) {
    cout << "Enter array elements as 0/1: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

void SortOne(int arr[], int n) {
    int left = 0, right = n - 1;
    while (left < right) {
        while (arr[left] == 0 && left < right) {
            left++;
        }
        while (arr[right] == 1 && left < right) {
            right--;
        }
        if (left < right) {
            swap(arr[left], arr[right]);
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

