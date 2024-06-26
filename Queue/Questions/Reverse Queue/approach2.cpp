#include <iostream>
#include <stack>
#include <queue>
using namespace std;

    queue<int> reverseQueue(queue<int>q){
        if (q.empty())
        return q;
        int frontElement=q.front();
        q.pop();
        q=reverseQueue(q);
        q.push(frontElement);

        return q;
    }

int main()
{
    queue<int>q;

    //push
    q.push(8);
    q.push(9);
    q.push(10);
    // cout<<"Orignal: ";
    // while(!q.empty()){
    //     cout<<q.front()<<" ";
    //     q.pop();
    // }cout<<endl;
    queue<int>qrev=reverseQueue(q);
    cout<<"Reversed: ";
    while(!qrev.empty()){
        cout<<qrev.front()<<" ";
        qrev.pop();
    }

return 0;
}