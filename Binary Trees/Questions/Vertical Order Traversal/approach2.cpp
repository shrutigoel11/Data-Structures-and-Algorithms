 #include <iostream>
 #include <vector>
  #include <map>
   #include <queue>
using namespace std;
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
vector<int> verticalOrder(Node *root)
    {
        map<int,vector<int>> mp;
        queue<pair<Node*,int>> q;
        vector<int> ans;
        if(!root)
        return ans;
        
        q.push(make_pair(root,0));
        while(!q.empty())
        {
            pair<Node*,int> p = q.front();
            q.pop();
            
            Node *curr = p.first;
            int hd = p.second;
            
            mp[hd].push_back(curr->data);
            
            if(curr->left)
            q.push(make_pair(curr->left,hd-1));
            if(curr->right)
            q.push(make_pair(curr->right,hd+1));
        }
         for(auto it: mp)
        {
            for(auto i : it.second)
            {
                ans.push_back(i);
            }
        }
        return ans;
}