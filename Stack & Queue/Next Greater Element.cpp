#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long int arr[100000];
        long long int res[100000];
        
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        
        stack<long long int>s;
        //{11, 13, 21, 3};
        //13 21 -1 -1
        //stack = 3 
        for(int i=n-1; i>=0; i--)
        {
            while(!s.empty() && arr[i]>=s.top())
            {
                s.pop();
            }
            
            
            if(s.empty())
            {
                res[i]=-1;
            }else
            {
                res[i] = s.top();
            }
            
            s.push(arr[i]);
        }
        
        for(int i=0; i<n; i++)
        {
            cout<<res[i]<<" ";
        }
       cout<<endl; 
    }
}
