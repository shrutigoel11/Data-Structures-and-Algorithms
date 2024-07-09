#include <iostream>
#include <cmath> // Include cmath for sqrt function
using namespace std;

void Divisors(int n) {
    for (int i = 1; i <= n; i++) { 
        if (n % i == 0) {
            cout << i << " ";
        }
    }
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    Divisors(n);
    return 0;
}
