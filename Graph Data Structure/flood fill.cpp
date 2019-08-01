#include<iostream>
using namespace std;
int row,col;
void print(int mat[][100])
{
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			cout<<mat[i][j]<<" ";
		}
		
	}
	
	cout<<endl;
	
}


void floodfill(int mat[][100], int i,int j,int color,int &target)
{
	//base cases
	//be in the square matrix so i,j>=0 and less than row and col respectively
	if(i<0 || j<0 || i>=row||j>=col ||mat[i][j]!=target)
	{
		return;
	}
	mat[i][j]=color;
	
	floodfill(mat,i+1,j,color,target);
	floodfill(mat,i,j+1,color,target);
	floodfill(mat,i,j-1,color,target);
	floodfill(mat,i-1,j,color,target);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        	int mat[100][100];
	
        	cin>>row>>col;
        	
        	for(int i=0; i<row; i++)
        	{
        		for(int j=0; j<col; j++)
        		{
        			cin>>mat[i][j];
        		}
        	}
        	//x y k
        	int x;
        	int y;
        	int k;
        	cin>>x>>y>>k;
        	
        	int target=mat[x][y];
        	
        	floodfill(mat,x,y,k,target);
        	
        	print(mat);
        
    }

}
