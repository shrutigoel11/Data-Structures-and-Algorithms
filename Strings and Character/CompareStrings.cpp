#include <iostream>
#include <cstring>
using namespace std;


// //Method 1
// void UsingFunction(string &s1, string &s2){
//     if(s1.compare(s2)==0){
//         cout<<"S1 is equal to S2";
//     }
//     else if(s1.compare(s2)<0){
//         cout<<"S1 is shorter than S2";
//     }
//     else{
//         cout<<"S1 is greater than S2";
//     }
// }

//Method 2
bool checkIfEqual(string &s1, string &s2){
    //if strings don't have same length
    if(s1.size()!= s2.size()){
         return false;
    }
    for(int i=0;i<s1.size();i++){
        if(s1[i]!=s2[i]){
            return false;
        }
    }
    return true;
}

int main()
{
string s1,s2;
cout<<"Enter string s1:";
cin>>s1;
cout<<"Enter string s2:";
cin>>s2;
bool ans=checkIfEqual(s1,s2);
if(ans){
    cout<<"S1 equals S2";
}
else{
    cout<<"S1 not equals S2";
}

return 0;
}