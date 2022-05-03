//problem link : https://leetcode.com/problems/remove-duplicates-from-sorted-array/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;//to keep track of unique elements
        int ptr=1;//to traverse array
        int n=nums.size();
        while(ptr<n){
            if(nums[i]!=nums[ptr]){
                swap(nums[++i],nums[ptr++]);//swap if unique element is found
            }else{
                ptr++;//skip if it is not unique
            }
        }
        return i+1;//return the number of unique elements
    }
};
