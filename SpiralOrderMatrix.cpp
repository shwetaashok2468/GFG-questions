#include <iostream>
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
        
        int arr[100][100];
        for(int i=0; i < m; i++)
        {
           for(int j=0; j<n; j++)
           {
               cin>>arr[i][j];
           }
            
        }
        int T = 0;
        int B = m-1;
        int L = 0;
        int R = n-1;
        int dir = 0;
        
        while(T <= B && L <=  R)
        {
            if(dir == 0) //left to right(++)
            {
                for(int i=L; i<=R; i++)
                {
                    cout<<arr[T][i]<<" ";
                }
                
                T++;
                
                //dir = 1;
                
            }
            else if(dir == 1) //top to down
            {
                for(int i = T; i<=B; i++)
                {
                    cout<<arr[i][R]<<" ";
                }
                //dir =2;
                R--;
            }else if(dir == 2) //left to right(--)
            {
                for(int i=R; i>=L; i--)
                {
                    cout<<arr[B][i]<<" ";
                }
                B--;
               // dir = 3;
                
            }else if(dir==3)// dir == 3 ---- 
            {
                for(int i=B; i>=T; i--)
                {
                    cout<<arr[i][L]<<" "; 
                }
                L++;
                //dir = 0;
            }
            
            
           dir = (dir+1)%4;
            
        }
        
        
        
      cout<<endl; 
    }
	
}
