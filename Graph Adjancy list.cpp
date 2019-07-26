#include <iostream>
#include<vector>
using namespace std;

void addEdge (vector<int>A[],int u,int v)
{
    //cout<<u<<" u and v " <<v <<endl;
    
    A[u].push_back(v);
    A[v].push_back(u);
    
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int v,e;
	    cin>>v;
	    cin>>e;
	    
	    vector<int> A[10000];
	    //int u,v;
	    
	  
	    for(int i = 0; i<e; i++)
	    {
	        int u,v;
	        cin>>u;
	        cin>>v;
	        
	        addEdge(A,u,v);
	    }
	    
	    
	    for (int i =0; i<v; i++)
	    {
	        cout << i ;
	        for (int j = 0; j < A[i].size(); j++)
	        {   
	            cout << "-> " << A[i][j] ;
	            
	        }
	        cout <<endl ;
	    }
	    
	}
}
