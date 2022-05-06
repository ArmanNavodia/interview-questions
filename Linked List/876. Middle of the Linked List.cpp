//problem link: https://leetcode.com/problems/middle-of-the-linked-list/

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        //take two pointer fast and slow
        ListNode* fast=head;
        ListNode* slow=head;
        //when fast is at last slow is at middle
        //fast travels twice distance so when fast is at end slow has just travelled
        //half the distance of fast i.e it will reach at middle
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
    }
};
