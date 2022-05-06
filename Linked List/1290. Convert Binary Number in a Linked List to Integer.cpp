//problem link: https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int ans=0;
        ListNode* temp=head;
        //traverse the linked list
        //initially ans=0 for 1 ->  0   ->  1
        //so as we know       2^2   2^1     2^0 =5
        //1st iteration = 2*0 + 1
        //2nd iteration =2(2*0 +1) + 0 -> 1* 2^1 
        //3rd iteration = 2(1*2^1) + 1 -> 1*2^2 +1*2^0 
        while(temp!=NULL){
            ans=ans*2+temp->val;
            temp=temp->next;
        }
        return ans;
    }
};
