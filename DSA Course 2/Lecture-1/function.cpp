    #include <iostream>
    #include <vector>
    using namespace std;
    //Passed by Reference
     vector<int> passedBy(int a, int b){
        vector<int>s;
        s.push_back(a+1);
        s.push_back(b+2);
        return s;
    }
    
    int main()
    {
        int a=2;int b=3;
        vector<int>ans=passedBy(a,b);
        for(auto i:ans){
            cout<<i<<" ";
        }
    
    return 0;
    }
