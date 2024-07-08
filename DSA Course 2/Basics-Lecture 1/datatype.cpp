#include <iostream>
#include<string>
using namespace std;

    int dataTypeSize(string str) {
        if(str == "Character") return sizeof(char);
        else if (str == "Integer"||str == "Float" || str == "Boolean") return sizeof(int);
        else if (str == "Double"|| str  == "Long") return sizeof(long); 
        else return -1;
      
    }

int main()
{
string str="Character";
cout<<dataTypeSize(str);


return 0;
}