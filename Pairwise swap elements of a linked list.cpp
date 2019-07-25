void pairWiseSwap(struct node *head)
{
   // The task is to complete this method
    node* first;
  while(head != NULL && head->next!=NULL)
  {
      first = head;
      head = head->next;
      swap(head->data,first->data);
      
      head = head->next;
  }
}
