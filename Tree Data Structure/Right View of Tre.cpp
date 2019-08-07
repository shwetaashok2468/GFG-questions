void view(Node* root,int level, int *max_level)
{
    //base case 
    if(root == NULL)
    return;
    
    
    if(*max_level < level)
    {
        cout<<root->data<<" ";
        *max_level = level;
    }
    
  
    view(root->right,level+1,max_level);
    view(root->left,level+1,max_level);
}
void rightView(Node *root)
{
   // Your Code here
   int max_level = 0; // used as maximum flag to check max 
   
   view(root,1,&max_level);
}

