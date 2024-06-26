#include <iostream>
#include <algorithm>
using namespace std;

void BubbleSort(int arr[], int n)
{
    bool flag;
    for (int i = 0; i < n - 1; i++) 
    {
        flag = false; // initialize flag for each pass
        for (int j = 0; j < n - i - 1; j++) // corrected loop bounds
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                flag = true; // update flag
            }
        }
        if (!flag) // check if any swaps were made in the pass
        {
            break; // no swaps means array is sorted
        }
    }
}

int main()
{
    int arr[] = {2, 9, 5, 7, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before Sorting array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    BubbleSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
