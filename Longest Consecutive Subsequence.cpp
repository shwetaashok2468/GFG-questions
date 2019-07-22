#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[100000];
        unordered_map<int,bool>hash;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            hash[arr[i]] = true;
        }
        //1 9 3 10 4 20 2
        int max_len =0;
        for(int i=0; i<n; i++)
        {
            if(hash.find(arr[i]-1)==hash.end())
            {
                int temp = arr[i];
               
               while(hash.find(temp)!=hash.end())
                {
                    temp++;
                } 
                 
                 max_len = max(max_len,temp-arr[i]);
           
            }
            
           
        }
        
        cout<<max_len<<endl;
    }

}
