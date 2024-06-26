#include <iostream>
#include <vector>
using namespace std;

int countPrime(int n) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);  
    int count = 0;
    vector<bool> prime(n, true); // n size with all true
    // For 0 & 1 Non prime
    if (n > 0) prime[0] = false;
    if (n > 1) prime[1] = false;
    for(int i = 2; i < n; i++) {
        if(prime[i]) {
            count++;
            for(int j = 2 * i; j < n; j += i) {
                prime[j] = false;
            }
        }
    }
    return count;
}
int main()
{
int n;
cin>>n;
int ans=countPrime(n);
cout<<"\nAnswer is:"<<ans;

return 0;
}