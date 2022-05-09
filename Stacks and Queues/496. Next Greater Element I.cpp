//problem link: https://leetcode.com/problems/next-greater-element-i/

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> s;
        unordered_map<int,int> mp;//element, next greater element
        
        int m=nums2.size();
        
        for(int i=m-1;i>=0;i--){
            //find the greater element pop the smaller element till greater element 
            //appear or stack is empty
            while(!s.empty() && s.top()<nums2[i]) s.pop();
            //if stack is empty than no greater element found so -1 else insert the
            //greater element in map
            mp[nums2[i]]=s.empty()?-1:s.top();
            s.push(nums2[i]);
        }
        vector<int> ans;
        for(int i=0;i<nums1.size();i++){
            auto it=mp.find(nums1[i]);
            ans.push_back(it->second);
        }
        return ans;
    }
};
