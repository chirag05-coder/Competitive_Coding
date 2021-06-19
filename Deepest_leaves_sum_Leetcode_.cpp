Link for Ques:
https://leetcode.com/problems/deepest-leaves-sum/



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
    int hei(TreeNode* root)
    {
           if(root==nullptr)
           {
                return 0;
           }
        return max(hei(root->left),hei(root->right))+1;
    }
    void trav(TreeNode* root,int height,int &sum)
    {
           if(root==nullptr)
           {
               return;
           }
           if(height==1)
           {
                sum+=root->val;
           }
          trav(root->left,height-1,sum);
           trav(root->right,height-1,sum);
    }
    int deepestLeavesSum(TreeNode* root) {
        int height=hei(root);
        //return height;
        int sum=0;
        trav(root,height,sum);
        return sum;
        
    }
};
