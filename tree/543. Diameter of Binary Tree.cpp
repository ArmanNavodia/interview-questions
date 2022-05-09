//problem link: https://leetcode.com/problems/diameter-of-binary-tree/

class Solution {
public:
    int diameter=0;
    int height(TreeNode* root){
        //find the height and also compute the diameter
        //diameter is longest path from one end to other
        if(root==NULL) return 0;
        int lh=height(root->left);
        int rh=height(root->right);
        diameter=max(diameter,lh+rh);
        return max(lh,rh)+1;
        
    }
    int diameterOfBinaryTree(TreeNode* root) {
         if(root==NULL) return 0;
        diameter=0;
        int h=height(root);
        return diameter;
       
    }
};
