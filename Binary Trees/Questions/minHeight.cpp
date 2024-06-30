#include <iostream>

using namespace std;
 struct TreeNode {
     int val;
      TreeNode *left;
    TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };



    int minDepth(TreeNode* root) {
           if(root==NULL) return 0;
        else{
            int left=minDepth(root->left);
            int right=minDepth(root->right);
            int ans=min(left,right)+1;
            //if one of the child null
             if (root->left == NULL) return right + 1;
             if (root->right == NULL) return left + 1;
            return ans;
        }
        
    }

int main()
{



return 0;
}