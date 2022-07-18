class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* a = head;
        ListNode* b = head;
        while(b!= NULL && b->next!= NULL ) { 
            a = a->next;
            b = b->next->next;
        }
        return a;
    }
};
