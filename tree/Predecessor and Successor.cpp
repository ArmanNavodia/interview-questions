//problem link: https://practice.geeksforgeeks.org/problems/predecessor-and-successor/1

void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{
if(root==NULL) return;
//do inorder traversal and while doing that check if the current value of node
//is greater than key if it is it can be potential inorder successor and so store
//it if we find any successor less than we found previously we update
//likewise for the predessor just the condition changes
findPreSuc(root->left,pre,suc,key);

if(root->key > key){
    if(!suc || suc->key>root->key) suc=root;
}
if(root->key < key){
    if(!pre || pre->key<root->key) pre=root;
}
findPreSuc(root->right,pre,suc,key);

}
