//Allocate stalls to cow such that they don't fight and distance b/w them is minimum

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossibleSolution(vector<int> &Stalls, int n, int k, int mid) {
    int CowCount = 1;
    int lastCowPlaced = Stalls[0];
    for (int i = 1; i < n; i++) {
        if (Stalls[i] - lastCowPlaced >= mid) {
            CowCount++;
            if (CowCount == k) {
                return true;
            }
            lastCowPlaced = Stalls[i];
        }
    }
    return false;
}

int AllocateStalls(vector<int> &Stalls, int n, int k) {
    sort(Stalls.begin(), Stalls.end());
    int l = 0;
    int maxi = Stalls[0]; // Initialize to the first stall
    int ans = -1;
    int h = Stalls[n - 1]; // Initialize to the last stall
    while (l <= h) {
        int mid = l + (h - l) / 2;
        if (isPossibleSolution(Stalls, n, k, mid)) {
            ans = mid;
            l = mid + 1;
        } else {
            h = mid - 1;
        }
    }
    return ans;
}

int main() {
    int k;
    cout << "Enter no. of aggressive cows: ";
    cin >> k;
    int n;
    cout << "Enter no. of stalls: ";
    cin >> n;

    vector<int> Stalls(n);
    cout << "Enter stalls value: ";
    for (int i = 0; i < n; i++) {
        cin >> Stalls[i];
    }
    int ans = AllocateStalls(Stalls, n, k);
    cout << "Minimum largest distance is: " << ans;
    return 0;
}
