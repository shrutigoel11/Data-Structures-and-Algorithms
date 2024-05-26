#include <iostream>
using namespace std;

void frequencyArray(int* arr, int n) {
    int freq[1001] = {0};
    for (int i = 0; i < n; ++i) {
        freq[arr[i]]++;
    }
    for (int i = 0; i < 1001; ++i) {
        if (freq[i] > 0) {
            cout << "Frequency of " << i << ": " << freq[i] << endl;
        }
    }
    cout<<"hi";
}

int main() {
    int arr[] = {3, 4, 4, 5, 5, 5};
    frequencyArray(arr, 6);
    return 0;
}
