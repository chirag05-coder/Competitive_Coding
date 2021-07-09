Link for Ques:
https://leetcode.com/problems/minimum-absolute-difference-in-bst/


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
    vector<int>v;
    void trav(TreeNode* root)
    {
        if(root==NULL)
            return ;
        trav(root->left);
        v.push_back(root->val);
        trav(root->right);
    }
    int getMinimumDifference(TreeNode* root) {
       
        trav(root);
        int mini=INT_MAX;
        for(int i=1;i<v.size();i++)
        {
              if(v[i]-v[i-1]<mini)
              {
                  mini=v[i]-v[i-1];
              }
        }
        return mini;
        
    }
};
