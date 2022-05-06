//problem link: https://leetcode.com/problems/maximum-product-of-three-numbers/
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        //it is based on the fact that product of two negative numbers is positive
        //take two negative and one positive number check if it is greater than
        //all the three positive numbers
       return max(nums[n-1]*nums[n-2]*nums[n-3],nums[0]*nums[1]*nums[n-1]);
    }
};
