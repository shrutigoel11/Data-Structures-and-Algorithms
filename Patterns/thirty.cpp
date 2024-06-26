// |||*****|||
// ||||***||||
// |||||*|||||

#include <iostream>
using namespace std;

int main(){
    int i=1,n;
    cout<<"Enter n:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+3;j++){
            cout<<"|";
        }
         for(int j=1;j<=2*i;j++){
            cout<<"*";
        }
        for(int j=1;j<=n-i+3;j++){
            cout<<"|";
        }
        cout<<endl;
    }
    return 0;
}