//problem link: https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/

class Solution {
public:
    //as the array is sorted the middle element is the root of element to balance the
    //binary search tree
    //recursively travel and add the nodes in the binary search tree
    //here the approach used is similar to binary search.
    TreeNode* helper(int low,int high,vector<int>& nums){
        if(low>high) return NULL;
        int mid=(low+high)/2;
        TreeNode *root=new TreeNode(nums[mid]);
        root->left=helper(low,mid-1,nums);
        root->right=helper(mid+1,high,nums);
        
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return helper(0,nums.size()-1,nums);
    }
};
