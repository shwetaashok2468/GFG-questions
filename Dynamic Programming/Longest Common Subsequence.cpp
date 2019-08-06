#include <bits/stdc++.h>
using namespace std;

int lcs(char *a, char *b , int m ,int n,int **dp)
{
    
    if(m==0 || n==0)
    {
        return 0;
    }
    
    
    if(dp[m][n]>-1)
    {
        return dp[m][n];
    }
    
    int ans;
    
    if(a[0] == b[0])
    {
        ans = 1+ lcs(a+1,b+1,m-1,n-1,dp);
    }
    else
    {
        int op1 = lcs(a+1,b,m-1,n,dp);
        int op2 = lcs(a,b+1,m,n-1,dp);
        
        ans =  max(op1,op2);
    }
    
    dp[m][n] = ans;
    
    return dp[m][n];
    
}



int main() {
    int t;
    cin>>t;
    while(t--)
    {
        char a[100];
        char b[100];
        
        int m,n;
        cin>>m;
        cin>>n;
        
        cin>>a;
        cin>>b;
        
        int** dp = new int*[m+1];
        
        for(int i=0; i<=m; i++)
        {
            dp[i] = new int[n+1];
            
            for(int j=0; j<=n; j++)
            {
                dp[i][j] = -1;
            }
        }
        
        
        cout<<lcs(a,b,m,n,dp)<<endl;
        
        
        
    }
	
}
