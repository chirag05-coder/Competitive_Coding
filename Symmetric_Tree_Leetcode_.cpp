Link for Ques:
https://leetcode.com/problems/symmetric-tree/



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
    bool flag=true;
    void tra(TreeNode* ln ,TreeNode* rn)
    {
          if(ln==NULL and rn==NULL)
               return;
           if(rn==NULL or ln==NULL)
           {   flag=false;
               return ;
           }
          if(ln->val!=rn->val)
          {
               flag=false;
          }
          tra(ln->left,rn->right);
          tra(ln->right,rn->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root->left!=NULL and root->right!=NULL and root->left->val==root->right->val  )
        {
               TreeNode* ln=root->left;
                TreeNode* rn=root->right;
                tra(ln,rn);
            if(flag)
                return true;
            else
                return false;
        
        }
        
        else if(root==NULL or (root->right==NULL and root->left==NULL))
            return true;
        else
            return false;
        
        
    }
};
