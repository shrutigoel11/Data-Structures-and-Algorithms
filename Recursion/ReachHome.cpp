#include <iostream>
using namespace std;

void reachHome(int src ,int dest){
    
    if(src==dest){
        cout<<"Reached Home"<<endl;
        return ;
    }
    cout<<"Started at step :"<<src <<" "<<"Ended at step :" <<dest <<endl;
    src++;
    reachHome(src,dest);
}

int main()
{
int src=1;
int dest=10;
reachHome(src,dest);


return 0;
}