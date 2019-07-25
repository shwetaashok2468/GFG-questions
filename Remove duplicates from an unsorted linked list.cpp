/*This is a function problem.You only need to complete the function given below*/
/*
The structure of linked list is the following
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
// Function to remove duplicates from the linked list
// root: root of the linked list
Node *removeDuplicates(Node *root)
{
    unordered_map<int,int>map;
    //1 4 5 6 3 4  6
    Node* curr = root;
    Node* prev=NULL;
    
    while(curr != NULL)
    {
        if(map.find(curr->data)!=map.end())
        {
            prev->next  = curr->next;//
            free(curr);
        }else
        {
           map[curr->data]++;
            prev = curr;
             
        }
        
            curr=prev->next; 
            
            
    }
    return root;

}
