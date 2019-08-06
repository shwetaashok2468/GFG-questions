#include <iostream>
using namespace std;


int longest_common_substring(char *a,char *b,int m,int n)
{
    int** dp = new int*[m+1];
    
    for(int i=0; i<=m; i++)
    {
        dp[i] = new int[n+1];
        for(int j=0; j<=n; j++)
        {
            dp[i][j]=-1;
        }
    }
    
    int result = 0;
    
    for(int i=0; i<=m; i++)
    {
        for(int j=0; j<=n; j++)
        {
            if(i==0 || j==0)
            {
                dp[i][j]=0;
            }
            else
            if(a[i-1]==b[j-1]) //lcs ====== s1[m-i] == s2[n-j]{ retrun lcs(s1+1,s2+1,m-1,n-1,dp)
            {
                dp[i][j] = dp[i-1][j-1]+1;
                
                result = max(result,dp[i][j]);
            }
            else
            {
                dp[i][j]=0;
            }
            
            
            
        }
    }
    
    return result;
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
        
        char a[100];
        char b[100];
        
        cin>>a;
        cin>>b;
        
        
        cout<<longest_common_substring(a,b,m,n)<<endl;
        
        
    }

}
