Link for Ques:
https://leetcode.com/problems/minimum-depth-of-binary-tree/


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
    int bfs(TreeNode* root)
    {   queue<TreeNode*>q;
       q.push(root);
       q.push(NULL);
     int depth=1,cnt=0;
     while(!q.empty())
     {   TreeNode* temp=q.front();
         if(temp==NULL)
         {   cnt=0;
             depth++;
             q.pop();
             if(!q.empty())
             {
                 q.push(NULL);
             }
         }
         else
         {
                q.pop();
                if(temp->left)
                {
                    q.push(temp->left);
                    cnt++;
                }
                if(temp->right)
                {
                    q.push(temp->right);
                      cnt++;
                }
             if(cnt==0)
             {
                 return depth;
                 
             }
             cnt=0;
         }
     }
     return depth;
         
    }
    int minDepth(TreeNode* root) {
        if(root==NULL)
            return 0;
         
        return bfs(root);
        
        
    }
};
