using namespace std;


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
        
        int k=0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]!=0) 
            {
                arr[k]=arr[i];
                k++;
            }
        }
        
        while(k<n)
        {
            arr[k] = 0;
            k++;
        }
        
        for(int i=0; i<n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
	
}
