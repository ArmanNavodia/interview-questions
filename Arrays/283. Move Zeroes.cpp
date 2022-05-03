//problem link: https://leetcode.com/problems/move-zeroes/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int ptr=0;
        int i=-1;
        while(ptr<nums.size()){
            if(nums[ptr]!=0){
                swap(nums[++i],nums[ptr]);
            }
            ptr++;
        }
    }
};
