#include <iostream>
using namespace std;

struct TreeNode
{
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
    
    TreeNode(int x){
        data = x;
        left = right = NULL;
    }
};
class Solution {
public:
    // Function to check whether a binary tree is balanced or not.
    pair<bool, int> isBalancedFast(TreeNode* root) {
        // Base case
        if (root == nullptr) {
            pair<bool, int> p = make_pair(true, 0);
            return p;
        }
        
        pair<bool, int> left = isBalancedFast(root->left);
        pair<bool, int> right = isBalancedFast(root->right);
        
        bool leftAns = left.first;
        bool rightAns = right.first;
        
        bool diff = abs(left.second - right.second) <= 1;
        
        pair<bool, int> ans;
        ans.second = max(left.second, right.second) + 1;
        
        if (leftAns && rightAns && diff) {
            ans.first = true;
        } else {
            ans.first = false;
        }
        
        return ans;
    }
    
    bool isBalanced(TreeNode* root) {
        return isBalancedFast(root).first;
    }
};