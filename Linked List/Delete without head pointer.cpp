//problem link: https://practice.geeksforgeeks.org/problems/delete-without-head-pointer/1/

class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del)
    {
        //swap the data with the next node
        //mow the node to be deleted is next node of the given pointer
        //this can be done in O(1).
      swap(del->data,del->next->data);
      Node* temp=del->next;
      del->next=temp->next;
      delete(temp);
    }

};
