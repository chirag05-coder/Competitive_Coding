Link for Ques:
https://leetcode.com/problems/path-sum-ii/


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
     void tra(TreeNode* root,int target,vector<vector<int>>&v,int sum)
     {  static vector<int>temp;
              if(root==nullptr)
              {
                   return;
              }
              if(root->left==NULL and root->right==NULL)
              {
                    sum+=root->val;
                    temp.push_back(root->val);
                     if(sum==target)
                     {
                          v.push_back(temp);
                     }
              }
      else
      {
         temp.push_back(root->val);
            sum+=root->val;
      }       
        tra(root->left,target,v,sum);
         tra(root->right,target,v,sum);
           temp.pop_back();
     }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>v;
        int sum=0;
        tra(root,targetSum,v,0);
        return v;
        
    }
};
