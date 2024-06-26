#include <iostream>
#include <queue>
#include<stack>
using namespace std;
 // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k) {
        stack<int>s;
        
        //push first k elements into onto stack
        for(int i=0;i<k;i++){
            int val=q.front();
            q.pop();
            s.push(val);
        }
        
        //now from stack to array
        while(!s.empty()){
            int val=s.top();
            s.pop();
            q.push(val);
        }
        
        //process n-k elements and add at last
        int t=q.size()-k;
        while(t--){
            int val=q.front();
            q.pop();
            q.push(val);
        }
        
        return q;
    }