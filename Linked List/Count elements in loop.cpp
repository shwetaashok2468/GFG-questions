int countNodesinLoop(struct Node *head)
{
     bool flag = false;
     Node* slow = head;
     Node* fast  = head;
     while(slow  && fast && fast->next )
     {
         slow = slow->next;
         fast = fast->next->next;
         
         if(slow == fast)
         {
             flag  = true;
             break;
         }
     }
     
     if(flag == true)
     {
         int c=1;
         Node* temp = slow;
         while(temp->next != slow)
         {
             c++;
             temp = temp->next;
         }
         //cout<<c<<endl;
         return c;
     }
     
     if(flag == false)
     {
         return 0;
     }
     
     
     
     
}
