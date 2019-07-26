/*This is a function problem.You only need to complete the function given below*/
/*Complete the function below
Node is as follows:
struct Node{
int data;
Node *left,*right;
};
*/


void vertical(Node *root, int hd ,map<int,int> &hmap)
{
    if(root == NULL)
    return;
    
    //adding root data to the hash table
     hmap[hd] = hmap[hd] + root->data;
     
    if(root->left != NULL)
    vertical(root->left,hd-1,hmap);
    
    if(root->right != NULL)
    vertical(root->right,hd+1,hmap);
    
}
void printVertical(Node *root)
{
    
    if(root == NULL)
    return;
    
    map<int,int>hmap;
    map<int,int>:: iterator it;
    
    int hd=0;
    vertical(root,0,hmap);
    
    
    for(it = hmap.begin(); it!= hmap.end(); it++)
    {
        cout<<it->second<<" ";
    }
    
   hmap.clear(); 
   
   
}
