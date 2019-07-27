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
        
        int max_len =0;
        //{1, 9, 3, 10, 4, 20, 2}
        for(int i=0; i<n; i++) //2
        { //arr[i] == 3
            if(hash.find(arr[i]-1)==hash.end()) //  check for 0
            { //if 0 is not present 
                int temp = arr[i]; // 9
               
               while(hash.find(temp)!=hash.end()) //check for 11
                {
                    temp++; //11
                } 
                 
                 max_len = max(max_len,temp-arr[i]); //max(4,11-9))==4
           
            }
            
           
        }
        
        cout<<max_len<<endl;
    }

}
