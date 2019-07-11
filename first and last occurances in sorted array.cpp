using namespace std;

int binarySearch_first(int arr[],int low ,int high,int x)
{
    int result = -1;
    while(low <= high)
    {
        int mid = (low+high)/2;
        
        if(x == arr[mid])
        {
            result = mid;
            high = mid-1;
        }
        
        else if(x<arr[mid])
        high = mid-1;
        else
        low = mid+1;
    }
    
    return result;
}

int binarySearch_last(int arr[],int low ,int high,int x)
{
    int result =-1;
    while(low <= high)
    {
        int mid = (low+high)/2;
        
        if(x == arr[mid])
        {
            result = mid;
            low = mid+1;
        }
        
        else if(x<arr[mid])
        high = mid-1;
        else
        low = mid+1;
    }
    
    return result;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x;
        cin>>x;
        int first,last;
        int arr[1000000];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        
        int low,high;
        low = 0;
        high = n-1;
        
        first = binarySearch_first(arr,low,high,x);
        last = binarySearch_last(arr,low,high,x);
        
        if(first == -1 && last == -1)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<first<<" "<<last<<endl;
        }
        
    }
    
    
	
}
