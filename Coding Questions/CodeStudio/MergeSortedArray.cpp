#include <iostream>
#include <algorithm>
using namespace std;

void MergeSortedArrays(int arr1[], int& n, int arr2[], int m) {
    int i = 0, j = 0, k = 0;
    
    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            arr1[k++] = arr1[i++];
        } else {
            arr1[k++] = arr2[j++];
        }
    }

    while (i < n) {
        arr1[k++] = arr1[i++];
    }

    while (j < m) {
        arr1[k++] = arr2[j++];
    }
    
    n = k; // Update the size of arr1
}

void Input(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
}

void Output(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter size of first array: ";
    cin >> n;
    int m;
    cout << "Enter size of second array: ";
    cin >> m;
    int arr1[n], arr2[m];
    cout << "Enter array 1 elements: ";
    Input(arr1, n);
    cout << "Enter array 2 elements: ";
    Input(arr2, m);
    cout << "Array 1 elements: ";
    Output(arr1, n);
    cout << "Array 2 elements: ";
    Output(arr2, m);

    MergeSortedArrays(arr1, n, arr2, m);
    cout << "Array 1 elements after merging: ";
    Output(arr1, n);

    return 0;
}

