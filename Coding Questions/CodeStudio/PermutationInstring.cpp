#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void solve(string str,vector<vector<string>> &ans,int i){ // as a reference pass karo vrna original string me nahi reflect hoga change
    // base case
    if(i>=str.length()){
        ans.push_back(vector<string>{str});
        return;
    }
    // swap karke recursion
    for(int j=i;j<str.length();j++){
        swap(str[i],str[j]);
        solve(str,ans,i+1);
        //backtrack kro taki next pass me i ke sath orignal string pass ho naki ans wali changed->firse swap krdo
        swap(str[i],str[j]);
    }
}


vector<vector<string>> permutation(string &str){
    vector<vector<string>> ans;
    int i=0;
    solve(str,ans,i);
    return ans;
}

int main()
{
string str = "abc"; // Example string
    vector<vector<string>> result = permutation(str);
    for (const auto &permutation : result) {
        for (const auto &s : permutation) {
            cout << s << " ";
        }
        cout << endl;
    }


return 0;
}