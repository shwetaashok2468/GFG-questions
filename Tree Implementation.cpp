#include<bits/stdc++.h>
using namespace std;

struct BstNode
{
    int data;
    BstNode* left;
    BstNode* right;
    
    BstNode(int data)
    {
        this->data = data;
        left = right = NULL;
        
    }
};

BstNode* insert(BstNode* root,int data)
{
    if(root == NULL)
    {
        root = new BstNode(data);
    }
    else if(data <= root->data)
    {
        root->left = insert(root->left,data);
    }
    else
    {
        root->right = insert(root->right,data);
    }
    
    return root;
}

int findMin(BstNode* root)
{
    BstNode* temp = root;
    if(root == NULL)
    {
        return -1;
    }
    
    while(temp->left != NULL)
    {
       
        temp = temp->left;
    }
    
     return temp->data;
    
    
}

int findMax(BstNode* root)
{
    while(root->right != NULL)
    {
        root = root->right;
    }
    
    return root->data;
}

int height(BstNode* root)
{
    if(root == NULL)
    {
        return 0;
    }
    int left_height,right_height;
    
    left_height = height(root->left);
    right_height = height(root->right);
    
    return max(left_height,right_height)+1;
}

bool search(BstNode* root,int k)
{
    if(root == NULL)
    {
        return false;
    }
    
    if(root->data == k)
    {
        return true;
    }
    else if(k <= root->data)
    {
        return search(root->left,k);
    }
    else
    {
        return search(root->right,k);
    }
}

void PreOrderTraversal(BstNode* root)
{
    if(root == NULL)
    return;
    
    cout<<root->data<<" ";
    PreOrderTraversal(root->left);
    PreOrderTraversal(root->right);
    
}

void InOrderTraversal(BstNode* root)
{
    if(root == NULL)
    {
        return;
    }
    
    InOrderTraversal(root->left);
    cout<<root->data<<" ";
    InOrderTraversal(root->right);
}

void PostOrderTraversal(BstNode* root)
{
    if(root == NULL)
    return;
    
    PostOrderTraversal(root->left);
    PostOrderTraversal(root->right);
    cout<<root->data<<" ";
}

void inorder_check(BstNode* root, vector<int> &v)
{
    if(!root) return;
    inorder_check(root->left, v);
    v.push_back(root->data);
    inorder_check(root->right, v);

}
bool isBST(BstNode* root)
{
    if(root==NULL)
    return true;
    vector<int>v;
    inorder_check(root, v);
    bool flag = true;
    
    for(int i=0; i<v.size()-1; i++)
    {
        if(v[i] > v[i+1])
        flag = false;
    }
    return flag;
}

bool isBalanced(BstNode* root)
{
    if(root == NULL)
    return true;
    
    return (isBalanced(root->left) 
    && isBalanced(root->right) 
    && abs(height(root->right) - height(root->left))<= 1);
}

//5 4 3 6 7 1
int main()
{
    int min,max,heightofTree;
    BstNode *root =NULL;
    
    root = insert(root,5);
    root = insert(root,4);
    root = insert(root,3);
    root = insert(root,6);
    root = insert(root,7);
    root = insert(root,11);
    

    
    min = findMin(root);
    cout<<"Minimum "<<min<<endl;
    max = findMax(root);
    cout<<"Maximum "<<max<<endl;
    
    heightofTree = height(root);
    cout<<"height "<<heightofTree<<endl;
    
    
    
    search(root,35)?cout<<"found 35"<<endl:cout<<"Not found 404"<<endl;
    search(root,11)?cout<<"found 11"<<endl:cout<<"Not found 404"<<endl;
    
    
    cout<<"PREORDER TRAVERSAL ";
	PreOrderTraversal(root);
    cout<<endl;
    cout<<"INORDER TRAVERSAL ";
	InOrderTraversal(root);
    cout<<endl;
    cout<<"POSTORDER TRAVERSAL ";
	PostOrderTraversal(root);
    cout<<endl;
    
    
    cout<<isBST(root)<<endl;
 
}


