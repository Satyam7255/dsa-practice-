class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*>b;
        while(headA!=NULL){
            b.insert(headA);
            headA=headA->next;
        }
        while(headB!=NULL){
            if(b.find(headB)!=b.end()){
                return headB;
                    headB=headB->next;
                
            }
        }
        return NULL;
    }
};
