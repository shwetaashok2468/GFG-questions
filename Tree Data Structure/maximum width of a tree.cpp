/*
Given a Binary Tree, find the maximum width of it. Maximum width is defined as the maximum number of nodes in any level.
For example, maximum width of following tree is 4 as there are 4 nodes at 3rd level.

*/





int getMaxWidth(Node* root)
{
   // Your code here
   
   if(root == NULL)
   return 0;
   int ans = 0;
   int count = 0;
   
   queue<Node*>q;
   q.push(root);
   
   while(!q.empty())
   {
       
       count = q.size();
       
       ans = max(ans,count);
       
       while(count--)
       {
            Node* temp = q.front();
           q.pop();
           
           // cout<<temp->data<<" ";
           
           if(temp->left != NULL)
           q.push(temp->left);
           
           if(temp->right !=NULL)
           q.push(temp->right);
           
       }
      
   }
  
   return ans;
   
}
