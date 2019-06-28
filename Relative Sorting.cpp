#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m;
        cin>>n;
   
       int s[1000000];
       int v[1000000];
        map<int, int>hash;
        map<int, int>::iterator it;
  
        
        for(int i=0; i<m; i++)
        {
            cin>>s[i];
            hash[s[i]]++;
        }
        
        
         for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
    
         for(int i=0; i<n; i++)
        {
           
               int temp = v[i];
               if(hash.find(temp)!=hash.end())
               {
                   while(hash[temp]!=0)
                   { 
                       cout<<v[i]<<" ";
                       hash[temp]--;
                    
                   }
               }
               
        }
        
        for(auto it = hash.begin(); it!=hash.end(); it++)
        {
            if(it->second >0)
            {
                while(it->second !=0)
                {
                     cout<<it->first<<" ";
                     it->second = it->second - 1;
                }
               
            }
            
        }
        
        cout<<endl;
    }
}
	
