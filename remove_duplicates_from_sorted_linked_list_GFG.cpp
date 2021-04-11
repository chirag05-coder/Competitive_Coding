Link for Ques:
https://practice.geeksforgeeks.org/problems/remove-duplicate-element-from-sorted-linked-list/1


Node *prev=head;
         Node *temp=head->next;
         
         while(temp!=NULL)
         {
             if(prev->data==temp->data and temp->next!=NULL)
             {
                 temp=temp->next;
             }
             else
             {
                 if(temp->next==NULL and temp->data==prev->data)
                 {
                   prev->next=NULL;
                   return head;
                 }
                 else
                 {
                     prev->next=temp;
                     prev=temp;
                     temp=temp->next;
                 }
             }
         }
         return head;
