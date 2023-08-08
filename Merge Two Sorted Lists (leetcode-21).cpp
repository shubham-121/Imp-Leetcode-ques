class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
   
    if(l1==NULL && l2==NULL)
    return 0;

    
    ListNode* head=new ListNode(0);
    
    ListNode* curr=head;

    while(l1!=NULL && l2!=NULL)
    {
        if(l1->val <= l2->val)
        {
            curr->next=l1;
            l1=l1->next;
        }
       else
        {
            curr->next=l2;
            l2=l2->next;
        }
        curr=curr->next;
    }
    if(l1==NULL && l2!=NULL)
    {
        curr->next=l2;
    }
    if(l2==NULL && l1!=NULL)
    {
        curr->next=l1;
    }
    return head->next;

    }
};
