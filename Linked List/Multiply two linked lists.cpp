//problem link: https://practice.geeksforgeeks.org/problems/multiply-two-linked-lists/1/

ong long  multiplyTwoLists (Node* l1, Node* l2)
{
long long modulo=1000000000+7;
  long long num1=0,num2=0,mul=1;
  while(l1!=NULL){
      num1=(num1*10+l1->data)%modulo;
      l1=l1->next;
  }
   while(l2!=NULL){
      num2=(num2*10+l2->data)%modulo;
      l2=l2->next;
  }
  mul=(num1%modulo * num2%modulo)%modulo;
  return mul;
}
