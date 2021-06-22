Link for Ques:
https://leetcode.com/problems/average-of-levels-in-binary-tree/



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
     void trav(TreeNode* root,vector<double>&v)
     {      queue<TreeNode*>q;
            q.push(root);
            q.push(NULL);
      double sum=0,cnt=0;
            while(!q.empty())
            {    TreeNode* temp=q.front();
                if(temp==NULL)
                {   v.push_back(sum/cnt);
                    sum=0;
                     cnt=0;
                    q.pop();
                 
                   if(!q.empty())
                   {
                        q.push(NULL);
                   }
                    
                }
                else
                {    sum+=temp->val;
                         cnt++; 
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
           
     }
    vector<double> averageOfLevels(TreeNode* root) {
        
        vector<double>v;
        trav(root,v);
        return v;
        
        
    }
};
