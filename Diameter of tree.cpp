int height(Node* root)
{
    if(root == NULL)
    return 0;
    
    return max(height(root->left),height(root->right))+1;
    
}
//complexity o(n^2)
//inefficient 
int diameter(Node* root)
{
   // Your code here
   if(root == NULL)
   return 0;
   
   int left_height = height(root->left);
   int right_height = height(root ->right);
   
   int left_diameter =  diameter(root->left);
   int right_diameter = diameter(root->right);
   
   int final_diameter =  max(left_height+right_height+1 , max(left_diameter,right_diameter));
   
   return final_diameter;
}

