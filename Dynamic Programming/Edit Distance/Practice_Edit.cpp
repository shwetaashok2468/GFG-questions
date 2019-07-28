#include <bits/stdc++.h>
using namespace std;
int min(int x, int y, int z) 
{ 
   return min(min(x, y), z); 
} 

int EditDistance(string str1,string str2,int m,int n,int edit[][5000])
{
    
     if (m == 0) return n; 

    if (n == 0) return m; 
    
     if (str1[m-1] == str2[n-1]) 
        return EditDistance(str1, str2, m-1, n-1,edit); 
  
  
  if(edit[m][n]!=0)
  return edit[m][n];
  
  else
  {
       edit[m][n] = 1 + min ( EditDistance(str1,  str2, m, n-1,edit),    
                     EditDistance(str1,  str2, m-1, n,edit), 
                     EditDistance(str1,  str2, m-1, n-1,edit)); 
      return edit[m][n];
  }

}

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        
       int n,m;
	    cin>>n;
	    cin>>m;
	    char a[n],b[m];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    for(int i=0;i<m;i++)
	    cin>>b[i];
	    
	    
	    int edit[n+1][5000];
	    memset(edit,0,sizeof(edit));
	    edit[0][0]=1;
	    cout<<EditDistance(a,b,n,m,edit)<<endl;
        
    }
	
}
