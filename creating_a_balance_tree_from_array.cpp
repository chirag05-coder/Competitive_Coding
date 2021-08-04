#include<bits/stdc++.h>
using namespace std;
class Node{
public:
     int data;
     Node*left;
     Node*right;
     Node(int data)
     {
       this->data=data;
       left=nullptr;
       right=nullptr;
     }
};
Node* buildTreeArray(int *arr,int s, int e)
{
  if(s>e)
  return nullptr;
  int mid=(s+e)/2;
  Node *root =new Node(arr[mid]);
  root->left=buildTreeArray(arr,s,mid-1);
  root->right=buildTreeArray(arr,mid+1,e);
  return root;

}
void bfs(Node* root)
{
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
      Node* fr=q.front();
      if(fr==NULL)
      {
           cout<<"\n";
           q.pop();
           if(!q.empty())
           {
            q.push(NULL);
          }
      }
      else
      {
        cout<<fr->data<<" ";
        q.pop();
          if(fr->left)
           q.push(fr->left);
          if(fr->right)
          q.push(fr->right);



      }
  }
}
void print_Tree(Node*root)
{
  if(root==nullptr)
  return;

  print_Tree(root->left);
  cout<<root->data<<" ";
//  print_Tree(root->right);

}
int main(int argc, char const *argv[]) {
    int n;
    cin>>n;
    int arr[n]{0};
    for(int i=0;i<n;i++)
    cin>>arr[i];
     Node *root=buildTreeArray(arr,0,n-1);
    bfs(root);
    cout<<"\n";
     print_Tree(root);
  return 0;
}
