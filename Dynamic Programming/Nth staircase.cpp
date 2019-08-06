#include <bits/stdc++.h>
using namespace std;
#define d 1000000007

void steps(int n,long long int *dp)
{
   dp[0]=1;
   dp[1]=1;
   
    for(int i=2; i<=n; i++)
    {
        
        dp[i] = (dp[i-1]%d + dp[i-2]%d)%d;
    
    }
}

int main() 
{
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    
    long long int *dp = new long long int[100000];
        
        int n = 100000;
       
    steps(n,dp);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        
    
    cout<<dp[n]<<endl;
        
    }
	
}
