#include <iostream>
#include <vector>
using namespace std;
    double switchCase(int choice, vector<double> &arr) {
        switch(choice){
            case 1: return  3.14159265359*arr[0]*arr[0];
                    break;
            case 2: return arr[0]*arr[1];
                    break;        
        }
    }

int main()
{

vector<double>v={2,3};
int choice=2;
cout<<switchCase(choice,v);
return 0;
}