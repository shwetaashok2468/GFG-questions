void inorder(Node* root,vector<int>&v)
{
    if(root == NULL)
    return;
    
    inorder(root->left,v);
    v.push_back(root->data);
    inorder(root->right,v);
}


int areMirror(Node* a, Node* b)
{
    vector<int>v;
    inorder(a,v);
    inorder(b,v);
    
    for(int i=0; i<v.size()/2; i++)
    {
        if(v[i] != v[v.size()-1-i])
        {
            return 0;
        }
    }
    return 1;
    
   // Your code here
   
   
   
}
