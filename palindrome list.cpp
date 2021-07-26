Link for Ques:
https://www.interviewbit.com/problems/palindrome-list/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::lPalin(ListNode* head) {
     ListNode* fast=head;
        ListNode* slow=head;
        while(fast!=nullptr and fast->next!=nullptr)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* mid=slow;
        ListNode* prev=slow;
        slow=slow->next;
        prev->next=nullptr;
        ListNode* curr;
        while(slow)
        {
            curr=slow->next;
            slow->next=prev;
            prev=slow;
            slow=curr;
        }
        fast=head; slow=prev;
        while(slow)
        {
            if(slow->val!=fast->val)
                return 0;
            slow=slow->next;
            fast=fast->next;
        }
        return 1;

}
