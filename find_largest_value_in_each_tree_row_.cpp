Link for Ques:
https://leetcode.com/problems/find-largest-value-in-each-tree-row/


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
    void bfs(TreeNode*root,vector<int>&v)
    {    queue<TreeNode*>pq;
          priority_queue<int>q;
          pq.push(root);
          pq.push(NULL);
         while(!pq.empty())
         {  TreeNode* temp=pq.front();
              if(temp==NULL)
              {
                     pq.pop();
                    v.push_back(q.top());
                 q = priority_queue <int>();
                   if(!pq.empty())
                       pq.push(NULL);
                  
              }
             else
             {
                 q.push(temp->val);
                 pq.pop();
                 if(temp->left)
                 {
                     pq.push(temp->left);
                 }
                 if(temp->right)
                 {
                     pq.push(temp->right);
                 }
             }
             
             
         }
          
       
     
        
    }
    vector<int> largestValues(TreeNode* root) {
         vector<int>v;
        if(root==nullptr)
            return v;
       
        bfs(root,v);
        return v;
        
        
    }
};
