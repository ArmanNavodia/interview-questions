//problem link: https://practice.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1

class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        //the idea is to scan the node and place in the linkedlist in which they
        //belong. So create three linkedlist for 0,1,2.
        //Here the nodes are relinked and are not created new
        //As there is no allocation of new memory it works in O(1) space
      Node* zerolist=new Node(-1);
      Node* zeroTail=zerolist;
       Node* onelist=new Node(-1);
       Node* oneTail=onelist;
       Node* twolist=new Node(-1);
       Node* twoTail=twolist;
       
       Node* temp=head;
       while(temp!=NULL){
          temp=temp->next;
          head->next=NULL;
          if(head->data==0){
              zeroTail->next=head;
              zeroTail=zeroTail->next;
          }else if(head->data==1){
               oneTail->next=head;
              oneTail=oneTail->next;
          }else{
               twoTail->next=head;
              twoTail=twoTail->next;
          }
          head=temp;
       }
        oneTail->next=twolist->next;
        zeroTail->next=onelist->next;
        return zerolist->next;
    }
};
