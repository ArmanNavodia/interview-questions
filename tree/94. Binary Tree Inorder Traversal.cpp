//problem link: https://leetcode.com/problems/binary-tree-inorder-traversal/

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> s;
        
        while(root || !s.empty()){
        if(root!=NULL){
        s.push(root);
            root=root->left;
        }else{
            root=s.top();
            s.pop();
            ans.push_back(root->val);
            root=root->right;
        }
        }
        return ans;
    }
};
