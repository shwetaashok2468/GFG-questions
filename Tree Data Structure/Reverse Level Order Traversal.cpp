struct Node
{
    int data;
    Node* left;
    Node* right;
}; */
void reversePrint(Node *root)
{
    //Your code here
    queue<Node*>q;
    stack<Node*>s;
    
    q.push(root);
    //s.push(root);
    
    while(!q.empty())
    {
        Node* temp = q.front();
        q.pop();
        s.push(temp);
        
       
        if(temp->right)
        {
            q.push(temp->right);
        }
        
         if(temp->left)
        {
            q.push(temp->left);
        }
    }
    
    while(!s.empty())
    {
        Node* t = s.top();
        cout<<t->data<<" ";
        s.pop();
    }
}
