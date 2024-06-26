#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    // Count the number of set bits
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    // If there's only one set bit, it's a power of 2
    return count == 1;
}
int main()
{
int n;
cin>>n;
cout<<isPowerOfTwo(n);
//1 means yes 0 means no
return 0;
}