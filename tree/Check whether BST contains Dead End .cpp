//problem link: https://practice.geeksforgeeks.org/problems/check-whether-bst-contains-dead-end/1

bool help(Node *root,int min,int max){
    if(root==NULL) return false;
   if(root->left==NULL && root->right==NULL){
   if(min==max) return true;
   else return false;
   }
    return help(root->left,min,root->data-1) || help(root->right,root->data+1,max);
    
}
bool isDeadEnd(Node *root)
{
    
    return help(root,1,INT_MAX);
    
}
