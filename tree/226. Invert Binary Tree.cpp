//problem link: https://leetcode.com/problems/invert-binary-tree/

class Solution {
public:
    void invert(TreeNode* root){
        if(root==NULL) return;
        //swap the left and right pointer in the whole tree
        TreeNode* temp=root->right;
       root->right=root->left;
        root->left=temp;
        invert(root->left);
        invert(root->right);
    }
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL) return root;
       invert(root);
        return root;
    }
};
