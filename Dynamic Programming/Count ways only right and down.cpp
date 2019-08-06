#include <bits/stdc++.h>
using namespace std;
int mod = pow(10,9) + 7;

int main() {
	int test;
	cin >> test;
	while(test--)
	{
	    int n, m;
	    cin >> n >> m;
	    
	    int dp[n][m];
	    for(int i = 0;i<n;i++)
	    {
	        for(int j = 0;j<m;j++)
	        {
	            if(i == 0 || j == 0)
	                dp[i][j] = 1;
	            else
	                dp[i][j] = (dp[i-1][j] + dp[i][j-1])%mod;
	        }
	    }
	    
	    cout << dp[n-1][m-1] << endl;
	}
	return 0;
}
