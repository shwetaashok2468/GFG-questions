Node* min(Node* root)
{
    while(root->left != NULL)
    {
        root = root->left;
    }
    
    return root;
}




Node *deleteNode(Node *root,  int x)
{
    // your code goes here
    
    if(root == NULL)
    return root;
    else if(x < root->data)
    root -> left = deleteNode(root->left,x);
    else if(x > root->data)
    root->right = deleteNode(root->right,x);
    else
    {
        //case 1 : no child 
        if(root->left == NULL && root->right == NULL)
        {
            delete root;
            root = NULL;
        }
        //case 2 : one child
        else if(root->left == NULL)
        {
            Node* temp = root;
            root = root->right;
            delete temp;
            
        }
        else if(root->right == NULL)
        {
            Node* temp = root;
            root = root->left;
            delete temp;
        }
        //case 3 : two children
        else
        {
            Node* temp = min(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right,temp->data);
            
        }
        
        
    }
    return root;
}

