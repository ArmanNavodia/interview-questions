//problem link: https://leetcode.com/problems/linked-list-cycle/

class Solution {
public:
    //using floyd's cycle detection algorithm
    bool hasCycle(ListNode *head) {
        if(head==NULL || head->next==NULL) return false;
        ListNode* slow=head;
        ListNode* fast=head->next;
        //take two pointer fast and slow
        //if there is cycle then fast pointer will catch the slow pointer
        //at some point.
        while(fast!=NULL && fast->next!=NULL){
            if(fast==slow) return true;
            slow=slow->next;
            fast=fast->next->next;
        }
        return false;
    }
};
