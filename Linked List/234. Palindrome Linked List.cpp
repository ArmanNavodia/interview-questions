//problem link: https://leetcode.com/problems/palindrome-linked-list/

class Solution {
public:
    ListNode* reverseList(ListNode* head){
        ListNode* pre=NULL;
        ListNode* next=NULL;
        while(head!=NULL){
            next=head->next;
            head->next=pre;
            pre=head;
            head=next;
        }
        return pre;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL|| head->next==NULL) return true;
          ListNode* fast=head;
        ListNode* slow=head;
        
       //find middle of linkedlist
        while(fast->next!=NULL && fast->next->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        //reverse the right half of linked list and append it to the list
        slow->next=reverseList(slow->next);
        slow=slow->next;
        
        //traverse left and right half together if value doesnt match then it is not
        //palindrome
        while(slow!=NULL){
            if(slow->val!=head->val) return false;
            head=head->next;
            slow=slow->next;
        }
        return true;
    }
};
