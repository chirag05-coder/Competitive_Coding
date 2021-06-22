Link for Ques:
https://leetcode.com/problems/two-sum-iv-input-is-a-bst/


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
    void tra(TreeNode* root,vector<int>&v)
    {
          if(root==NULL)
              return;
          tra(root->left,v);
            v.push_back(root->val);
           tra(root->right,v);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int>v;
        tra(root,v);
        int s=0,e=v.size()-1;
        while(s<e)
        {
            if(v[s]+v[e]>k)
            {
                  e--;
            }
            else if(v[s]+v[e]<k)
            {
                s++;
            }
            else
            {
                return true;
            }
        }
        return false;
        
        
    }
};
