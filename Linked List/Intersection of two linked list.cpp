// Complete the findMergeNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {

    unordered_map<SinglyLinkedListNode*,int>hmap;

    while(head1!=NULL)
    {
        hmap[head1]++;
        head1=head1->next;
    }
   // bool flag = false;
    while(head2!=NULL)
    {
        if(hmap.find(head2)!=hmap.end())
        {
           // flag = true;
           
            return head2->data;
            
    
        }

        head2 = head2->next;
    }

    return 0;
}

