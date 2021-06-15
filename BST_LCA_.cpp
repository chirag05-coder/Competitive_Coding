Link for Ques:
https://www.hackerrank.com/challenges/binary-search-tree-lowest-common-ancestor/problem


#include <bits/stdc++.h>

using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }

/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/  
  
    Node *lca(Node *root, int v1,int v2) {
      if(root->data>v1 and root->data>v2)
        {
             return lca(root->left,v1,v2);
        }
        if(root->data<v1 and root->data<v2)
        {
             return lca(root->right,v1,v2);
        }
        return root;
    }

}; //End of Solution
