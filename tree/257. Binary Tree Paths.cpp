//problem link: https://leetcode.com/problems/binary-tree-paths/

class Solution {
public:
    vector<string> ans;//to store the strings
    void findpaths(TreeNode* root,string s){
        //if it is leaf node then append the string to vector
        if(root->left==NULL && root->right==NULL){
            s+=to_string(root->val);
            ans.push_back(s);
        }
        s=s+to_string(root->val)+"->";
        //recursievly travel left and right
       if(root->left) findpaths(root->left,s);
       if(root->right) findpaths(root->right,s);
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
    ans.clear();
        findpaths(root,"");
        return ans;
    }
};
