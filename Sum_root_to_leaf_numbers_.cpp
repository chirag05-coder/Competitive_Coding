Link for Ques:
https://leetcode.com/problems/sum-root-to-leaf-numbers/


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
    void trav(TreeNode*root,int sum,int &ans)
    {     if(root==NULL)
           return ;
          sum=sum*10+root->val;
          if(root->left==NULL and root->right==NULL)
          {
                 ans+=sum;
              return;
          }
       trav(root->left,sum,ans);
       trav(root->right,sum,ans);
     
           
    }
    int sumNumbers(TreeNode* root) {
          if(root==NULL)
               return 0;
        int ans=0;
        trav(root,0,ans);
        
        return ans;
    }
};
