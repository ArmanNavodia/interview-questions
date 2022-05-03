//problem link : https://leetcode.com/problems/find-the-duplicate-number/
//Two pointer approch fast and slow
//cycle detection algo
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow=nums[0];//slow pointer
        int fast=nums[0];//fast pointer
        do{
            slow=nums[slow];//moves by 1
            fast=nums[nums[fast]];//moves by 2
            
        }while(slow!=fast);
        
        fast=nums[0];
        //to find start of the cycle
        while(fast!=slow){
            fast=nums[fast];
            slow=nums[slow];
        }
        return slow;
    }
};
