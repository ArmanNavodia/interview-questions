//problem link: https://leetcode.com/problems/sum-of-left-leaves/

class Solution {
public:
    int ans=0;
    //the approach is simple i have used a check to know whether is left call or not
    //so whenever the call is made to left is made true
    void helper(TreeNode* root,bool left){
        if(root==NULL) return;
        //this condition checks whether the it is leaf node and it is left side
        if(root->left==NULL && root->right==NULL && left){
            ans+=root->val;
        }
        helper(root->left,true);
        helper(root->right,false);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        ans=0;
        helper(root,false);
        return ans;
    }
};
