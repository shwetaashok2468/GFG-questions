/*This is a function problem.You only need to complete the function given below*/
/* Link list Node 
struct Node {
    int data;
    Node* next;
}; */
/* Should return data of middle node. If linked list is empty, then  -1*/
int getMiddle(Node *head)
{
    if(head == NULL)
    return NULL;
   // Your code here
   Node*fast =head;
   Node*slow = head;
   
   while(fast!=NULL && fast->next !=NULL)
   {
       fast = fast->next->next;
       slow = slow->next;
   }
   
   return slow->data;
}

