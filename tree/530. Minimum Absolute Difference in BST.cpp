//problem link: https://leetcode.com/problems/minimum-absolute-difference-in-bst/

class Solution {
public:
     TreeNode *prev =NULL;
    //simple inorder traversal with finding difference 
    void minHelper(TreeNode* root,int &mine){
        if(root==NULL) return;
       if(root->left)   minHelper(root->left,mine);
        if(prev) 
            mine=min(mine,abs(root->val-prev->val));
        
            prev=root;
        
       if(root->right) minHelper(root->right,mine);
    }
    int getMinimumDifference(TreeNode* root) {
        prev=NULL;
        int mine=INT_MAX;
        minHelper(root,mine);
        return mine;
    }
};
