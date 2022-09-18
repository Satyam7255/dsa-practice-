
class Solution {
    public:
    struct comp{
       bool operator()(const ListNode *lhs, const ListNode *rhs) const {
        return lhs->val > rhs->val;
    }
    };
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {

        ListNode* dummy = new ListNode(0);
        ListNode* temp= dummy;

        priority_queue<ListNode*, vector<ListNode*>, comp> pq;
        for(ListNode* list:lists){
            if(list!=NULL){
            pq.push(list);
        }
        }

        while(!pq.empty()){
            ListNode* min = pq.top();
            pq.pop();
            temp->next = min;
            temp=temp->next;
            if(min->next){
                pq.push(min->next);
            }

        }
        return dummy->next;
    }
};
