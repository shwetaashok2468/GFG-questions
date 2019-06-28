#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long int n;
        cin>>n;
        long int sum;
        cin>>sum;
        
        long int arr[100000];
        
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
        }
        int temp1,temp2;
        
        int count =0;
       
        int k=1;
        int start =1;
        int curr_sum = 0;
        while(k<=n)
        {
            if(curr_sum<sum)
            {
                curr_sum =curr_sum + arr[k];
                k++;
            }
            
            if(curr_sum == sum)
            {
               
               temp1 = start;
               temp2 = k-1;
               // cout<<start<<" "<<(k-1)<<endl;
                //cout<<(k-1)<<endl;
                count++;
                break;
            }
            
            if(curr_sum>sum)
            {
                start++;
                k = start;
                curr_sum =0;
            }
            
            
        }
        
        
        if(count == 0)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<temp1<<" "<<temp2<<endl;
        }
    }

}
