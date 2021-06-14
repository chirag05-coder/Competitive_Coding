Link for Ques:
https://practice.geeksforgeeks.org/problems/right-view-of-binary-tree/1#


#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};
// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}


 // } Driver Code Ends
/* A binary tree node has data, pointer to left child
   and a pointer to right child 
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

// Should return  right view of tree
class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    void bfs(Node*root,vector<int>&v)
{    queue<Node*>q;
     q.push(root);
     q.push(NULL);
     //v.push_back(root->data);
     int value;
     while(!q.empty())
     {   Node* temp=q.front();
         if(temp==NULL)
         {    q.pop();
           
            
            if(!q.empty())
            {    v.push_back(value);
                 q.push(NULL);
            }
              
             
         }
         else
         {    value=q.front()->data;
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
     while(!q.empty())
     {
          value=q.front()->data;
            q.pop();
     }
     v.push_back(value);
     
}
    vector<int> rightView(Node *root)
    {
       // Your Code here
       vector<int>v;
       if(root==NULL)
       return v;
       bfs(root,v);
       return v;
    }
};



// { Driver Code Starts.

// Function to Build Tree
Node* buildTree(string str)
{
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if(currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if(currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


int main() {
    int t;
    string  tc;
    getline(cin,tc);
    t=stoi(tc);
    while(t--)
    {
        string s;
        getline(cin,s);
        Node* root = buildTree(s);

        Solution ob;
        vector<int> vec = ob.rightView(root);
        for(int x : vec){
            cout<<x<<" ";
        }
        cout << endl;
    }
    return 0;
}

  // } Driver Code Ends
