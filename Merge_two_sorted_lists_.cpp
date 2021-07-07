Link for Ques:
https://leetcode.com/problems/merge-two-sorted-lists/



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
     void insert_at_tail(ListNode* & head, int data)
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
   ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
       ios_base::sync_with_stdio(0);
       cin.tie(0);
       ListNode* nn=nullptr;
       while(l1!=nullptr and l2!=nullptr)
       {
           if(l1->val<l2->val)
           {
               insert_at_tail(nn,l1->val);
               l1=l1->next;
           }
           else
           {
               insert_at_tail(nn,l2->val);
               l2=l2->next;
           }
       }
       while(l1!=nullptr)
       {
           insert_at_tail(nn,l1->val);
           l1=l1->next;
       }
       while(l2!=nullptr)
       {
           insert_at_tail(nn,l2->val);
           l2=l2->next;
       }
       return nn;
       
       
   }
};
