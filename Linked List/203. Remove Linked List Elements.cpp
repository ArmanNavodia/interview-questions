//problem link: https://leetcode.com/problems/remove-linked-list-elements/

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL) return head;
       //create a dummy node and append the given list to the dummy node
        //so that if the first node's value == val we need not to handle explicitly
        //take two pointer curr and prev and if curr value==val then make 
        //prev next to point curr next this way curr node is removed
       ListNode* dummyNode=new ListNode(-1);
        dummyNode->next=head;
        head=dummyNode;
         ListNode* prev=head;
        ListNode* curr=head->next;
        
        while(curr!=NULL){
            if(curr->val==val){
                prev->next=curr->next;
            }else{
                prev=curr;
            }
            curr=curr->next;
        }
        return head->next;
    }
};
