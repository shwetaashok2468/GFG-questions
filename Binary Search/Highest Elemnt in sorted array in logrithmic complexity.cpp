#include <iostream>
using namespace std;

int binarySearch(int arr[],int l,int r)
 {
    while (l <= r)
    {
    
        int mid = l + (r - l) / 2;
        
        if (arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1])
        {
        return arr[mid];
        }
        
        if (arr[mid - 1] < arr[mid] && arr[mid] < arr[mid+1]) 
        {
        l = mid + 1;
        }
        
        if (arr[mid] > arr[mid + 1] && arr[mid] < arr[mid-1])
        {
        r = mid - 1;
        }
    }
    return 0;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0; i<n; i++)
	    {
	        cin>>arr[i];
	    }
	    //n=11
	   /* int low =0; //1
	    int high = n-1; *///1
	    int max = binarySearch(arr,0,n-1);
	    
       if(max == 0)
        cout<<arr[n-1]<<endl;
        else
	    cout<<max<<endl;
	}
	
	
	
}
