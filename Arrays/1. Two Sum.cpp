problem link: https://leetcode.com/problems/two-sum/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;//create map to store value and index
        for(int i=0;i<nums.size();i++){
            auto it=mp.find(target-nums[i]);//find if any other number is present 
            //with adding that number target can be achieved
            // num1+num2=target
            //num2=target-num1
            if(it!=mp.end()){
                return {i,it->second};
            }else{
                mp[nums[i]]=i;
            }
        }
        return {0,0};
    }
};
