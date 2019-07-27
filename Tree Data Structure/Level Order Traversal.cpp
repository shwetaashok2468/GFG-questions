#include<bits/stdc++.h>
using namespace std;

struct Node
{
    char data;
    Node* left;
    Node* right;
    Node(char data)
    {
        this->data = data;
        left = right = NULL;
    }
};

Node* insert(Node* root,char data)
{
    if(root == NULL)
    {
        root = new Node(data);
        
    }
    else if(data <= root->data)
    {
        root->left = insert(root->left,data);
    }else
    {
        root->right = insert(root->right,data);
    }
    
    return root;
}
void LevelOrder(Node* root)
{
    if(root == NULL)
    return;
    
    queue<Node*> Q;
    Q.push(root);
    
    while(!Q.empty())
    {
       Node* temp = Q.front();
       cout<<temp->data<<" ";
       if(temp->left != NULL)
       {
          Q.push(temp->left); 
       }
       if(temp->right != NULL)
       {
          Q.push(temp->right); 
       }
       Q.pop();
        
    }
    
    
    
}

int main()
{
    Node* root;
    root = NULL;
    
    root = insert(root,'M');
    root = insert(root,'B');
	root = insert(root,'Q');
	root = insert(root,'Z'); 
	root = insert(root,'A');
	root = insert(root,'C');
    root = insert(root,'H');
    root = insert(root,'I');
    root = insert(root,'J');
    root = insert(root,'K');
    
    LevelOrder(root);
    
}


