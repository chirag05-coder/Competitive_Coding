Link for Ques:
https://leetcode.com/problems/remove-nth-node-from-end-of-list/


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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
         ListNode* temp=head;
         int size=0;
       while(temp!=nullptr)
       {
           size++;
           temp=temp->next;
       }
       //cout<<size;
       int path=size-n;
       //cout<<path;
       temp=nullptr;
       if(size==n)
           head=head->next;
       else
       {
       temp=head;
       path--;
       while(path--)
       {
           temp=temp->next;
       }
       //cout<<temp->val<<"\n";
       ListNode* copy=temp->next;
       //cout<<temp->next->next->val<<"\n";
        temp->next=temp->next->next;
       delete copy;
       }
       return head;
       
        
    }
};
