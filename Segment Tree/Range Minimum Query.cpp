
//https://practice.geeksforgeeks.org/problems/range-minimum-query/1





void buildTree(int *tree,int arr[],int index,int s,int e)
{
    if(s==e)
    {
         tree[index]=arr[e];
         return;
    }
    
    int mid = (s+e)/2;
    
    buildTree(tree,arr,2*index,s,mid);
    
    buildTree(tree,arr,2*index+1,mid+1,e);
    
    tree[index] =  min(tree[2*index], tree[2*index+1]);
    
}
int *constructST(int arr[],int n)
{
  //Your code here
  
  int *tree =  new int[4*n+1];
  int index = 1;
  int s = 0;
  int e = n-1;
  
  buildTree(tree,arr,index,s,e);
  
  return tree;
}
/* The functions returns the
 min element in the range
 from a and b */
 
 
 int q(int tree[],int index,int s,int e,int qs,int qe)
{
	//range (qs-qe}
	//1.No overlap
	if(qs>e || qe<s)
	{
		return INT_MAX;
	}
	//2.COMPLETE OVERLAP
	if(s>=qs && e<=qe)
	{
		return tree[index];
	}
	//3.PARTIAL OVERLAP
	int mid = (s+e)/2;
	int leftans = q(tree,2*index,s,mid,qs,qe);
	int rightans = q(tree,2*index+1,mid+1,e,qs,qe);
	return min(leftans,rightans);
}

int RMQ(int tree[] , int n, int a, int b)
{
  int index = 1;
  int s = 0;
  int e = n-1;
 
    return q(tree,index,s,e,a,b);
}
