Link for Ques:
https://leetcode.com/problems/path-sum/


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool flag=false;
    void tra(TreeNode* root,int targetSum,int sum)
    {
            if(root==nullptr)
                return ;
            
            if(root->left==nullptr and root->right==nullptr)
            {
                   sum+=root->val;
                   if(sum==targetSum)
                       flag=true;
            }
        else
         sum+=root->val;
              
        tra(root->left,targetSum,sum);
         tra(root->right,targetSum,sum);
         
            
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        
        tra(root,targetSum,0);
        return flag;
        
    }
};
