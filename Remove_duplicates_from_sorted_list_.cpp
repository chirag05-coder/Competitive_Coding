Link for Ques:
https://www.interviewbit.com/problems/remove-duplicates-from-sorted-list/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    ListNode* fast=A;
    ListNode* slow=A;
    
    while(fast!=NULL)
    {
        if(fast->val!=slow->val)
        {
            slow->next=fast;
            slow=fast;
        }
        fast=fast->next;
    }
     if(slow!=fast)
     slow->next=NULL;
    return A;
}
