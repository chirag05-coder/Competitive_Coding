Link for Ques:
https://leetcode.com/problems/add-one-row-to-tree/


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
   
 TreeNode* exp(TreeNode*root,int val,int depth)
      {
          if(root==nullptr)
                 return nullptr;
         
        if(depth==2)
       {
             TreeNode* temp1;
             TreeNode* temp2;
             temp1=root->left;
             temp2=root->right;
           
           TreeNode* n1=new TreeNode(val);
            TreeNode* n2=new TreeNode(val);
               n1->left=temp1;
               n2->right=temp2;
               root->left=n1;
               root->right=n2;
       }
       
       root->left=exp(root->left,val,depth-1);
       root->right=exp(root->right,val,depth-1);
       return root;
      }
   TreeNode* addOneRow(TreeNode* root, int val, int depth) {
           if(depth==1)
           {
               TreeNode* temp=new TreeNode(val);
               temp->left=root;
               return temp;
           }
       else
       {
           return exp(root,val,depth);
       }
           
   }
};
