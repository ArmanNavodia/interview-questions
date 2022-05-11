//problem link: https://leetcode.com/problems/balanced-binary-tree/

class Solution {
public:
    //simple height function is modified 
    //the calculation begins from last node and height is passed upwards adding 1
    //so in between calculate difference between the height of right subtree and left 
    //subtree if difference is greater than 1 than return -1.
    int height(TreeNode* root){
        if(root==NULL) return 0;
        int lh=height(root->left);
        int rh=height(root->right);
        if(abs(lh-rh)>1) return -1;
        
        if(lh==-1|| rh==-1) return -1;
        return 1+max(lh,rh);
    }
    bool isBalanced(TreeNode* root) {
        int h=height(root);
        if(h==-1) return false;
        return true;
    }
};
