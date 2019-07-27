/*This is a function problem.You only need to complete the function given below*/

/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}*head;
*/
// This function should delete node from linked list. The function
// may assume that node exists in linked list and is not last node
// node: reference to the node which is to be deleted
void deleteNode(Node *node)
{
   // Your code here
   
   if(node==NULL)
   return;
   
   if(node->next == NULL)
   return;
   
   node->data = node->next->data;
   Node* temp = node->next->next;
   free(node->next);
   node->next = temp;
}
