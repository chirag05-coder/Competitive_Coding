Link for Ques:
https://leetcode.com/problems/kth-smallest-element-in-a-bst/


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
    int value;
    void trav(TreeNode* root,int &k)
    {
        if(root==nullptr)
            return ;
        
        trav(root->left,k);
        k--;
        if(k==0)
        {
            value=root->val;
        }
        trav(root->right,k);
        
    }
    int kthSmallest(TreeNode* root, int k) {
        
        trav(root,k);
        return value;
        
        
    }
};
