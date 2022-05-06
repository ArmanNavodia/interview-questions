//problem link: https://leetcode.com/problems/remove-duplicates-from-sorted-list/

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        //there is no or only one node return the head
        
        if(head==NULL||head->next==NULL) return head;
        
        ListNode* curr=head;
        ListNode* forward=head->next;
        
        //take two pointers and check for the duplicate 
        //if duplicate remove the link and deallocate memory
        while(forward!=NULL && curr!=NULL){
            if(curr->val==forward->val){
                curr->next=forward->next;
                delete(forward);
                if(curr->next!=NULL) forward=curr->next;
                else break;
            }else{
                curr=curr->next;
                forward=forward->next;
            }
        }
        return head;
    }
};
