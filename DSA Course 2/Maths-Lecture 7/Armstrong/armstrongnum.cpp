#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool checkArmstrong(int n){
	int orignal=n,sum=0;
	while(n>0){
		int digit = n%10;
		sum+=digit*digit*digit;
		
		n=n/10;
	}
	if(sum==orignal) return true;
	else return false;
}

int main()
{
int n;
cout<<"Enter n:";
cin>>n;
if(checkArmstrong(n)) cout<<"Armstrong Number";
else cout<<"Not an armstrong number";


return 0;
}