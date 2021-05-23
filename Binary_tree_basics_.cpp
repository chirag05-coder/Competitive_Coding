#include<bits/stdc++.h>
using namespace std;

class node
{ public:  
 int data;
    node*left;
    node*right;
    
    	node(int d)
    	{  data=d;
		    left=NULL;
			 right=NULL;  
		}
};

//building tree d=(-1) for the leaf node 
node* buildTree()
{    int d;
     cin>>d;
     if(d==-1)
      {    return NULL;
	  }
	  node* root=new node(d);
	  root->left=buildTree();
	  root->right=buildTree();
	  return root;
}

// printing  nodes   PREORDER
void print(node*root)
{      if(root==NULL)
         return;
        
        
		
		
		cout<<root->data<<" ";
		print(root->left);
	
		print(root->right); 
}

//Print nodes in INORDER
void printIN(node*root)
{     if(root==NULL)
         return;
         
       printIN(root->left);
	   cout<<root->data<<" ";
	   printIN(root->right);  
}

//print nodes in POSTORDER
void print_Post(node*root)
{      if(root=NULL)
           return;
        
		print_Post(root->left);
		print_Post(root->right);
		cout<<root->data<<" ";   
}

//Height of the tree
int height(node*root)
{      if(root==NULL)
            return 0;
         
	int ls=height(root->left);
	int rs=height(root->right);
	return max(ls,rs)+1;	    
}

//print a specific level
void print_Kth_Level(node*root,int k)
{          if(root==NULL)
             return;
             
             if(k==1)
             {    cout<<root->data<<" ";
			 }
			 print_Kth_Level(root->left,k-1);
			 print_Kth_Level(root->right,k-1);
}

//print all levels
void print_all_level(node*root)
{           if(root ==NULL)
                return;
             int temp=height(root);
			for(int i=1;i<=temp;i++)
			{      print_Kth_Level(root,i);
			cout<<endl;
			   }   
}
//BFS traversal level order(O(N)) time
void bfs(node*root)
{     queue<node*>q;
          q.push(root);
          q.push(NULL);
         while(!q.empty())
		 {      node*f=q.front();
		          if(f==NULL)
		          {
					   cout<<"\n";
					   q.pop();
					   if(!q.empty())
		             	 q.push(NULL); 
					}
		         
				 else
				 {
					  
				
		      cout<<f->data<<" ,";
		          q.pop();
		            
		       if(f->left)
			   {   q.push(f->left);
						
				}         
		          
		         if(f->right)
				 {     q.push(f->right);
				 }
		      }
				  
		 }
		 return; 
}

//NO of nodes in a binary tree
int no_of_nodes(node*root)
{     if(root==NULL)
         return 0;
         
       return   1 + no_of_nodes(root->left)  + no_of_nodes(root->right);   
}

//Sum of all nodes in a binary tree
int sum_of_nodes(node*root)
{     if(root==NULL)
         return 0;
         
       return   root->data + no_of_nodes(root->left)  + no_of_nodes(root->right);   
}

int diameter(node*root)
{       if(root==NULL)
           return 0;
       int h1=height(root->left);
	   int h2=height(root->right);
	   int op1=h1+h2;
	   int op2=diameter(root->left);
	   int op3=diameter(root->right);
	   
	   
	   return max(op1,max(op2,op3)); 
        
           
}

int main()
{   node*root=buildTree();
    //   print(root);
//       cout<<endl;
//       cout<<height(root);
//       cout<<endl;
//       print_Kth_Level(root,4);
//       cout<<endl;
//       print_all_level(root);
//       cout<<endl;
   //    bfs(root);
  // cout<<no_of_nodes(root);
 
  cout<<diameter(root);
}
