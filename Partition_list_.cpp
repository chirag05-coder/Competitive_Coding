Link for Ques:
https://leetcode.com/problems/partition-list/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void it(ListNode*&head,int data)
    {
           if(head==nullptr)
           {
                head=new ListNode(data);
           }
        else
        {
             ListNode* temp=head;
            while(temp->next!=nullptr)
            {
                  temp=temp->next;
                
            }
            temp->next=new ListNode(data);
        }
    }
    ListNode* partition(ListNode* head, int x) {
        ListNode* ll=nullptr;
        
        if(head==nullptr)
            return ll;
        ListNode* temp=head;
        
         ListNode*l2=nullptr;
    
         int cnt=1;
          while(head!=nullptr)
          {
              if(head->val<x)
              {
                 it(ll,head->val);
                
               //  temp=head;
                 
                  
              }
              else
              {
                 it(l2,head->val);
              }
              head=head->next;
              
              
          }
       // cout<<temp->val<<endl;
        if(ll!=nullptr)
        {
          temp=ll;
            while(temp->next!=nullptr)
            {
                  temp=temp->next;
                
            }
       temp->next=l2;
        //cout<<temp->next->val<<endl;
        return ll;
        }
        else
            return l2;
        
    }
};
