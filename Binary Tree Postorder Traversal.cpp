Link for Ques:
https://leetcode.com/problems/binary-tree-postorder-traversal/



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
    vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode*>st1,st2;
          vector<int>v;
        if(root==nullptr)
            return v;
        st1.push(root);
        TreeNode* node=root;
        while(!st1.empty())
        {
            node=st1.top();
             st1.pop();
            st2.push(node);
           
            if(node->left!=nullptr)
                st1.push(node->left);
            if(node->right!=nullptr)
                st1.push(node->right);
            
        }
      
        while(!st2.empty())
        {
            v.push_back(st2.top()->val);
            st2.pop();
        }
        
        return v;
    }
};
