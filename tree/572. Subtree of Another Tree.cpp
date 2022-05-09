//problem link: https://leetcode.com/problems/subtree-of-another-tree/

class Solution {
public:
    bool isIdentical(TreeNode* root, TreeNode* subRoot){
        //if both tree are null then it is subtree
        //if only one is null that means something is remianing in any of tree
        //hence it is not subtree
         if(root==NULL&&subRoot==NULL) return true;
        if(root==NULL||subRoot==NULL) return false;
        //match the root value then check for right side and left side
        return root->val==subRoot->val && isIdentical(root->left,subRoot->left) && isIdentical(root->right,subRoot->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(subRoot==NULL) return true;
        if(root==NULL) return false;
       return isIdentical(root,subRoot)||isSubtree(root->left,subRoot)||isSubtree(root->right,subRoot);
    }
};
