Link for Ques:
https://practice.geeksforgeeks.org/problems/rotate-a-linked-list/1/?problemStatus=unsolved&problemType=functional&page=1&sortBy=submissions&query=problemStatusunsolvedproblemTypefunctionalpage1sortBysubmissions#



#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


 // } Driver Code Ends
/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/


class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        // Your code here
        int len=0;
        Node*temp=head;
        while(temp!=NULL)
        {
            temp=temp->next;
            len++;
        }
        if(k>=len)
        return head;
       // cout<<len<<endl;
        temp=head;
        k=k%len;
        k--;
        
        while(k--)
        {
            temp=temp->next;
        }
          Node* res=temp->next;
          temp->next=NULL;
          temp=res;
          while(res->next!=NULL)
          res=res->next;
          
            res->next=head;
            head=temp;
            return head;
          
          
    }
};
    


// { Driver Code Starts.

void printList(Node *n)
{
    while (n != NULL)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, val, k;
        cin>>n;
        
        cin>> val;
        Node *head = new Node(val);
        Node *tail = head;
        
        for(int i=0; i<n-1; i++)
        {
            cin>> val;
            tail->next = new Node(val);
            tail = tail->next;
        }
        
        cin>> k;
        
        Solution ob;
        head = ob.rotate(head,k);
        printList(head);
    }
    return 1;
}
  // } Driver Code Ends
