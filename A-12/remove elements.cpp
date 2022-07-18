class Solution {
public:
     ListNode* removeElements(ListNode* head, int a) {
        ListNode* start = head;
        if(head == NULL) return NULL;
        while(start->next != NULL){
            if(start->next->a == a) 
            {
            start->next = start->next->next;
            }
            else 
            {
            start = start->next;
            }
        }
        if(head->a == a) 
        {
        head = head->next;
        }
        return head;
    }
};
