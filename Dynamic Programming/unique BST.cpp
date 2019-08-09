/*This is a function problem.You only need to complete the function given below*/

// Functiuon to return number of trees
int numTrees(int n) {
 
    
    int dp[n+1];
    fill_n(dp, n + 1, 0); 
    dp[0]=1;
    dp[1]=1;
    
    for(int i=2; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            // n-i in right * i-1 in left  i is root
            dp[i] += dp[j-1]*dp[i-j];
        }
    }
    
    return dp[n];
}
