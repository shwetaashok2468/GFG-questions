/*Testcase1: The tree is
        1
     /    \
   3       2
So, the spiral level order would be 1 3 2
Testcase2: The tree is
                           10
                        /    \
                     20       30
                    /    \
               40       60
So, the spiral level order would be 10 20 30 60 40 */



void printSpiral(Node *root)
{
    
    if(root == NULL)
    return;
    
    stack<Node*>Q;
    stack<Node*>S;
    
    Q.push(root);
    
    bool flag = true;
    
    
    
    
    while(!Q.empty() || !S.empty())
    {
        
    
        while(!Q.empty())
        {
            
             Node* temp = Q.top();
        cout<<temp->data<<" ";
        Q.pop();
            
          if(temp->right!=NULL)
           S.push(temp->right);
        
            if(temp->left!=NULL)
            S.push(temp->left);
            
   
        
        }
        
        
        
         while(!S.empty())
        {
             Node* temp = S.top();
             cout<<temp->data<<" ";
             S.pop();
        
             if(temp->left!=NULL)
             Q.push(temp->left);
        
            if(temp->right!=NULL)
            Q.push(temp->right);
     
            
        }
        
        
    }
}

