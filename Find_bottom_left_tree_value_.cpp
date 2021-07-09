Link for Ques:
https://leetcode.com/problems/find-bottom-left-tree-value/


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
    int value,temp=-1;
    void trav(TreeNode* root,int level)
    {
           if(root==NULL)
               return;
        
          if(level>temp)
          {
                temp=level;
                value=root->val;    
          
          } 
         trav(root->left,level+1);
        
         trav(root->right,level+1);
         
    }
    int findBottomLeftValue(TreeNode* root) {
        
        trav(root,0);
        return value;
        
        
        
    }
};
