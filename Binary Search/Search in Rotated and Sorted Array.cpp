#include <iostream>
using namespace std;



int  binarySearch(int arr[], int low,int high,int x)
{
    while(low<= high)
    {
        int mid = (low+high)/2;
        
        if(arr[mid] == x)
        {
            return mid;
        }
        
        else if(arr[mid]<=arr[high])
        {
            if(arr[mid] < x && x <= arr[high])
            low = mid+1;
            else
            high = mid-1;
        }else
        {
            if(arr[mid] > x && x >= arr[low])
             high = mid-1;
            else
             low = mid +1;
        }
    }
    
    return -1;
}
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        int arr[1000000];
        
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        
        int x;
        cin>>x;
        
        int index = binarySearch(arr,0,n-1,x);
       /* if(index == -1)
        cout<<index<<endl;
        else*/
        cout<<index<<endl;
        
    }
}
