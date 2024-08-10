#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> findArrayIntersection(vector<int> &a, int n, vector<int> &b, int m)
{
	vector<int>ans;
	int visit[m]={0};
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i]==b[j]&& visit[j]==0){
				ans.push_back(a[i]);
				visit[j]=1;
				break;
			}
			if(b[j]>a[i])break;
		}
	}
	return ans;
}

int main()
{



return 0;
}