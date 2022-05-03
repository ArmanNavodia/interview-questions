//problem link : https://leetcode.com/problems/sort-colors/
class Solution {
public:
    //dutch flag algo
    void sortColors(vector<int>& nums) {
        int i=-1; //keep track of 0s
        int j=nums.size(); //keep track of 2s
        int ptr=0; //pointer to traverse
        while(ptr<j){
            if(nums[ptr]==0){
                i++;
                swap(nums[i],nums[ptr]); //put all the 0s in front
                ptr++;
            }else if(nums[ptr]==2){
                j--;
                swap(nums[j],nums[ptr]); //put all the 2s at end
            }else{
                ptr++; //remaining 1s are in the middle automatically
            }
        }
    }
};
