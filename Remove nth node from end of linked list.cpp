Link for Ques:
https://www.interviewbit.com/problems/remove-nth-node-from-list-end/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* head, int n) {

      ListNode* temp=head;
         int size=0;
       while(temp!=nullptr)
       {
           size++;
           temp=temp->next;
       }
       
       int path=size-n-1;
      
       temp=nullptr;
       if(n>=size)
           head=head->next;
       else
       {
       temp=head;
      
       while(path--)
       {
           temp=temp->next;
       }
     
       
       ListNode* copy=temp->next;
      
        temp->next=copy->next;

         
       }
       return head;
}
