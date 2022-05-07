//problem link: https://leetcode.com/problems/merge-two-sorted-lists/

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head=new ListNode(-101);
        //create a new head node and merge both the list
        //to avoid special conditions for head node of both the list I have created
        //a dummy node so no need to check for the head nodes explicitly
        if(list1==NULL && list2==NULL) return NULL;
        if(list1==NULL) return list2;
        if(list2==NULL) return list1;
       
         ListNode* temp=head;
        while(list1!=NULL && list2!=NULL){
            if(list1->val<=list2->val){
                temp->next=list1;
                list1=list1->next;
            }else{
                 temp->next=list2;
                list2=list2->next;
            }
             temp=temp->next;
        }
        if(list1!=NULL){
            temp->next=list1;
        }
        if(list2!=NULL){
            temp->next=list2;
        }
        return head->next;
    }
};
