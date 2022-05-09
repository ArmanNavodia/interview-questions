//problem link: https://leetcode.com/problems/range-sum-of-bst/

class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        //root is null so return zero
        if(root==NULL) return 0;
        //when the root's data is less than low so check in right side
        if(root->val<low){
         return  rangeSumBST(root->right,low,high);
                
        }
        //when the root's data is greater than high check left side
        else if(root->val>high){
       return rangeSumBST(root->left,low,high);
                
        }
      
        //add the current root's data and also add the numbers of left and right               //subtree
        else
        return root->val+rangeSumBST(root->left,low,high) + rangeSumBST(root->right,low,high);
    }
};
