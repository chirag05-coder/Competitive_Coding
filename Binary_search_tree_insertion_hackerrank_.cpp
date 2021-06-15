Link for Ques:
https://www.hackerrank.com/challenges/binary-search-tree-insertion/problem


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
  	
  	void preOrder(Node *root) {
		
      	if( root == NULL )
          	return;
      
      	std::cout << root->data << " ";
      	
      	preOrder(root->left);
      	preOrder(root->right);
    }

/*
Node is defined as 

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

*/

    Node * insert(Node * root, int data) {
        if(root==NULL)
          return new Node(data);
        
        if(root->data>data)
        {
            root->left=insert(root->left,data);
        }
        if(root->data<data)
        {
            root->right= insert(root->right,data);
        }


        return root;
    }

};
