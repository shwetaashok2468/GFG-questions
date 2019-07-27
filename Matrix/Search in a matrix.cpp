#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int low,int high,int x)
{
    int mid;
    
    while(low<=high)
    {
        mid = (low+high)/2;
        
        if(x == arr[mid])
        return mid;
        else if(x > arr[mid])
        low = mid+1;
        else
        high = mid-1;
    }
    
    return -1;
}

int main()
{	
    int t;
	cin>>t;
	while(t--)
	{
	    int m,n;
	    cin>>m;
	    cin>>n;
	    int arr[m][n];
	    
	    for(int i=0; i<m; i++)
	    {
	        for(int j=0; j<n; j++)
	        {
	            cin>>arr[i][j];
	        }
	    }
	    
	    int x;
	    cin>>x;
	    bool flag = false;
	    
	    int result;
	    for(int i=0; i<m; i++)
	    {
	        result = binarySearch(arr[i] , 0 , n-1,x);
	        //cout<<result<<" ";
	        if(result != -1)
	        {
	            flag = true;
	            break;
	        }
	        
	    }
	    
	    
	    if(flag == true)
	    {
	        cout<<1<<endl;
	    }
	    else
	    {
	        cout<<0<<endl;
	    }
	    
	   
	    
	}
	    
}
