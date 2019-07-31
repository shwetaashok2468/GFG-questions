#include <iostream>
using namespace std;

int fun(int n,int *arr)
{
    if(n==0)
    return 0;
    
    if(arr[n]!= -1)
    {
        return arr[n];
    }
    
    int ans;
    
    if(n%2 == 0)
    ans  =  min(fun(n/2,arr),fun(n-1,arr));
    else
    ans = fun(n-1,arr);
    
    arr[n] = 1+ans;
    
    return arr[n];
    
     
    
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        
        int arr[n+1];
        
        for(int i=0; i<=n; i++)
        {
            arr[i]=-1;
        }
        
        cout<<fun(n,arr)<<endl;
        
    }
	//code
	return 0;
}
