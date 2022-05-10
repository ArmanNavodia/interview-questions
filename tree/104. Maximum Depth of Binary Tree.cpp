//problem link: https://leetcode.com/problems/maximum-depth-of-binary-tree/

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL) return 0;
        int ld=maxDepth(root->left);//it will give depth of left subtree
        int rd=maxDepth(root->right);//it will give depth of right subtree
        
        return 1+max(rd,ld);//select max depth of right and left subtree and add
                            //one for the root node
    }
};
