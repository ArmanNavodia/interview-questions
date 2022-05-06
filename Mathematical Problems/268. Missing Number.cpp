//problem link: https://leetcode.com/problems/missing-number/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int n=nums.size();
        //calculate sum of n natural number
      int expectedSum=(n*(n+1))/2;
        int sum=0;
        //calculate sum of given array
        
        for(int x:nums){
            sum+=x;           
        }
        //missing number is the number which did not contribute in the sum
        return expectedSum-sum;
    }
};
