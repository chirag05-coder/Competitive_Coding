Link for Ques:
https://leetcode.com/problems/binary-tree-paths/


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
   void tra(TreeNode* root,vector<string>&v,string str)
   {
       if(root==NULL)
           return ;
       
       if(root->left==NULL and root->right==NULL)
       {
           str+=to_string(root->val);
           v.push_back(str);
       }
       str+=to_string(root->val)+"->";
       tra(root->left,v,str);
       tra(root->right,v,str);
        str.pop_back();
   }
   vector<string> binaryTreePaths(TreeNode* root) {
       vector<string>v;
       tra(root,v,"");
       return v;
   }

};
