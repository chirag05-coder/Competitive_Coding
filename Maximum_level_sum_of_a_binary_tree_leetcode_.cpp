Link for Ques:
https://leetcode.com/problems/maximum-level-sum-of-a-binary-tree/


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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*>q;
        
        int level=1,ans=1;
        int sum=0;
        int maxii=root->val;
        q.push(root);
        q.push(NULL);
        while(!q.empty())
        {   TreeNode* temp=q.front();
             if(temp==NULL)
             {    if(sum>maxii)
                   {
                       maxii=sum;
                      ans=level;
                    }
            
              sum=0;
                  level++;
                 q.pop();
                 if(!q.empty())
                 {
                      q.push(NULL);
                 }
              }
              else
              {   sum+=q.front()->val;
                  q.pop();
                  if(temp->left)
                  {
                       q.push(temp->left);
                      
                  }
                  if(temp->right)
                  {
                      q.push(temp->right);
                     
                  }
              }
         
            
        }
        return ans;
            
    }
};
