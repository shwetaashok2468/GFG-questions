#include <bits/stdc++.h>
using namespace std;

void uglyNumbers(long long unsigned int  n, long long unsigned int ugly[])
{
    
    
    ugly[0] = 1;
    
  long long unsigned int  i2,i3,i5;
   i2 = 0; i3 =0; i5 =0;
   long long unsigned int nm2,nm3,nm5,ans;
   ans = 1;
    
    nm2 = 2;
    nm3 = 3;
    nm5 = 5;
    
    for(int i=1; i<n; i++)
    {
            
          ans = min(nm2,min(nm3,nm5));
          ugly[i]=ans;
          if( ans == nm2)
          {
              i2++;
              nm2 = ugly[i2]*2;
          }
          
           if(ans == nm3)
          {
              i3++;
              nm3 = ugly[i3]*3;
       
          }
          
           if(ans == nm5)
          {
               i5++;
               nm5 = ugly[i5]*5;
          }
          
          
    }
    
}

int main() 
{
     long long unsigned int ugly[10000];
    long long  unsigned int n;
     uglyNumbers(10000,ugly);
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
      cout<<ugly[n-1]<<endl;
      
     
    }
	
}
