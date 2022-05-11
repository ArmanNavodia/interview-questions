//problem link: https://leetcode.com/problems/path-sum/

class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        //if node is null return
        if(root==NULL) return false;
        //if it is leaf node check last node is equal to target sum if it is return
        //tru
        if(root->left==NULL && root->right==NULL){
            if(targetSum==root->val) return true;
            else return false;
        }
        //call the left and right subtree to find the target sum 
        return hasPathSum(root->left,targetSum-root->val) || hasPathSum(root->right,targetSum-root->val);
        
    }
};
