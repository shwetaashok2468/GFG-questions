// A wrapper over leftViewUtil()
void view(Node* root,int level, int* max_level)
{
    if(root == NULL)
    return;
    
    if(*max_level < level)
    {
        cout<<root->data<<" ";
        *max_level = level;
    }
    
    view(root->left,level+1,max_level);
    view(root->right,level+1,max_level);
}
void leftView(Node *root)
{
   // Your code here
   int max_level = 0;
   view(root,1,&max_level);
}

