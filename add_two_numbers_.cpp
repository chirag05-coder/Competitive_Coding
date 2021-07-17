Link for Ques:
https://leetcode.com/problems/add-two-numbers/


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
    void insert_at_tail(ListNode*&head, int data)
    {
        if(head==nullptr)
          head=new ListNode(data);
        else
        {
            ListNode* temp=head;
            while(temp->next!=nullptr)
                temp=temp->next;
            temp->next=new ListNode(data);
        }
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ll=nullptr;
        int carry=0;
        int value=0;
        while(l1!=nullptr and l2!=nullptr)
        {
             value=l1->val+l2->val+carry;
              insert_at_tail(ll,value%10);
              carry=value/10;
             
            l1=l1->next;
            l2=l2->next;
            
        }
        while(l1!=nullptr)
        {
             value=l1->val+carry;
              insert_at_tail(ll,value%10);
              carry=value/10;
              
            l1=l1->next;
        }
         while(l2!=nullptr)
        {
             value=l2->val+carry;
              insert_at_tail(ll,value%10);
              carry=value/10;
              
            l2=l2->next;
        }
        if(carry!=0)
        {
             insert_at_tail(ll,carry);
        }
        return ll;
        
    }
};
