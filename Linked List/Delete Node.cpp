Node* deleteNode(Node *front,int position)
{
     Node* head = front;
    Node* prev=NULL;
    
    while(position>1 && head)
    {
        prev = head;
        head=head->next;
        position--;
    }
    
    
     if(prev == NULL)
    {
        front = head->next;
       // return front;
    }else
    {
         prev->next = head->next;
        
    }


         
            free(head);

    return front;
    //Your code here
}
