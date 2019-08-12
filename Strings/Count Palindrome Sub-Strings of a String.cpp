#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int countPS(string s,int m)
{
    if(m==1)
    {
        return 0 ;
    }
    
    bool dp[m][m];
    memset(dp,false,sizeof(dp));
    
    int count[m][m];
    memset(count,0,sizeof(count));
    
    for(int i=0;i<m; i++)
         dp[i][i]=true;
         
         
    //length 2 palindrome
    for(int i=0; i<m-1; i++)
    {
        if(s[i] == s[i+1])
        {
            dp[i][i+1]=true;
            count[i][i+1]=1;
        }
        
    }
    //abaab
    for(int gap = 2; gap<m; gap++)
    {
        for(int i=0; i<m-gap; i++)
        {
            int j = gap+i;
            
            if(s[i]==s[j] && dp[i+1][j-1])
            {
                dp[i][j] = true;
                count[i][j] = count[i+1][j] + count[i][j-1] + 1 - count[i+1][j-1];
            }else
            {
                count[i][j] = count[i+1][j] + count[i][j-1]- count[i+1][j-1];
            }
        }
    }
    
    return count[0][m-1];
}



int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        string s;
        cin>>s;
        
        cout<<countPS(s,m)<<endl;
    }
	//code
	return 0;
}
