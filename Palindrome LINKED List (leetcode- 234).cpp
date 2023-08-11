class Solution {
public:
    ListNode* reverseList(ListNode* head)
    {
        ListNode* prev=NULL;
        ListNode* next=NULL;

        while(head!=NULL)
        {
            next=head->next;
            head->next=prev;
            prev=head;
            head=next;
        } 
        return prev;
    }

    bool isPalindrome(ListNode* head) {
       
       if(head==NULL)
       return false;
       
     ListNode* slow=head;
     ListNode* fast=head;

     while(fast->next!= NULL && fast->next->next!=NULL)
     {
         slow=slow->next;
         fast=fast->next->next;
     }

     slow->next=reverseList(slow->next);
     ListNode* compare=slow->next;
    

     while(compare!=NULL)
     {
         if(head->val != compare->val)
         return false;

         else
         {
             head=head->next;
             compare=compare->next;
         }
     }
     return true;


    }
};
