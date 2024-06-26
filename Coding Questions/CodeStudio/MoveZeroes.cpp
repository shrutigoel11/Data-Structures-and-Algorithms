#include <iostream>
#include <algorithm>
using namespace std;

void MoveZeroes(int arr[], int n){
    int i=0;
    for(int j=0;j<n;j++){
        if(arr[j]!=0){
            swap(arr[j],arr[i]);
            i++;
        }
    }
        while(i<n)
            arr[i++]=0;

}
void Input(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}
void Output(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr1[n];
    cout << "Enter array elements: ";
    Input(arr1, n);
    MoveZeroes(arr1, n);
    cout << "Array elements after moving: ";
    Output(arr1, n);


return 0;
}