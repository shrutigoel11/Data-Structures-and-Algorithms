#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

void solve(string digits,vector<string>ans,int i,string output,string mapping[]){
    if(i>digits.length()){
        ans.push_back(output);
        return;
    }
    int element=digits[i]-'0';  //agar string se int value nklni h toh -0 aur vice versa me -a;
   string value=mapping[element];
    for(int k=0;k<value.length();k++){
        output.push_back(value[k]);
        solve(digits,ans,i+1,output,mapping);
        output.pop_back();
    }
}
vector<string> letterCombinations(string digits) {

    vector<string>ans;
    string output="";
    string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    int i=0;
    solve(digits,ans,i,output,mapping) ; 
    }

int main()
{



return 0;
}