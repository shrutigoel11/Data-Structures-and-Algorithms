#include <iostream>
using namespace std;
int countDistinctWays(long long nStairs) {
   if(nStairs<0){
       return 0;
   }
   if(nStairs==0){
       return 1;
   }
   int ans=countDistinctWays(nStairs-1)+countDistinctWays(nStairs-2);
   return ans;
}

int main()
{

long long nstairs;
cin>>nstairs;
int ans=countDistinctWays(nstairs);
cout<<"Answer is:"<<ans;

return 0;
}