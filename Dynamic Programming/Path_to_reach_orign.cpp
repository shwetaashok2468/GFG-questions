/*
You are standing on a point (n, m) and you want to go to origin (0, 0) by taking steps either left or down i.e. from each point you are allowed to move either in (n-1, m) or (n, m-1). Find the number of paths from point to origin.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains two integers n and m representing the point.

Output:
For each testcase, in a new line, print the total number of paths from point to origin.

Constraints:
1 <= T<= 100
1 <= n, m <= 25

Example:
Input:
3
3 2
3 6
3 0

Output:
10
84
1
*/



#include <iostream>
using namespace std;


int path_to_reach_origin(int m,int n)
{
    
    
    int dp[m+1][n+1];
    
    
    for(int i=0; i<=m; i++)
    {
        dp[i][0]=1;
    }
    
     for(int i=0; i<=n; i++)
    {
        dp[0][i]=1;
    }
    
    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=n; j++)
        {
            dp[i][j]=dp[i-1][j]+dp[i][j-1];
        }
    }
    
    
    return dp[m][n];
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
        
        int path = path_to_reach_origin(m,n);
        
        
        cout<<path<<endl;
        
        
    }
	
}
