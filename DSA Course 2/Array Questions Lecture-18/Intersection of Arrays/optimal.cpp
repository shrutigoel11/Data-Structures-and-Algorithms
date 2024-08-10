#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> findArrayIntersection(vector<int> &a, int n, vector<int> &b, int m)
{
	int i=0,j=0;
	vector<int> ans;
	while(i<n && j<m){
		if(a[i]>b[j])j++;
		else if(a[i]<b[j])i++;
		else{
			ans.push_back(a[i]);
			i++;
			j++;
		}
	}
	return ans;
}

int main()
{



return 0;
}