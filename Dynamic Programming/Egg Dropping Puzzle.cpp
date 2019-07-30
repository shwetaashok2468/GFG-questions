#include <bits/stdc++.h>
using namespace std;

int n,k;
int Egg[11][51];
//n = no of Eggs
//k = no of floors 
//Complexity = O(k^2 * n) (generally [O(n^2 * e] where n = floors and e no of eggs)
int EggDropping(int n,int k)
{
    if(n==1)//if no of eggs is one ,n egg dropping worst case
    return k;
    
    if(k==0)//if no of floors is zero so  egg drop
        return 0;
    
    if(Egg[n][k]!= -1)
    return Egg[n][k];
        
        
    int ans=INT_MAX;
    
    for(int i=1;i<=k;i++)
    {
        ans  = min(ans,1+max(EggDropping(n,k-i),EggDropping(n-1,i-1)));
    }
    Egg[n][k] =ans;
    
    return Egg[n][k];

}

void solve()
{
    for(int i=0;i<=n;i++)
        for(int j=0;j<=k;j++)
            Egg[i][j]=-1;
            
    cout<<EggDropping(n,k)<<endl;
}

int main() {
    
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>k;
     solve();
        
    }
	
}
