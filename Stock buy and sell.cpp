#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(int a[],int n)
{
    int first = 0,second,flg = 0;
    for(int i=1;i<n;i++)
    {
        if(a[i] < a[i-1] || i == n-1 && a[n-1] > a[n-2])
        {
            if(i == n-1 && a[i] > a[i-1]) second = n-1;
            else
            second = i-1;
            if(first == second)
            {
                first++;
            }
            else
            {
                flg = 1;
                cout<<"("<<first<<" "<<second<<")"<<" ";
                first = i;
            }
        }
    }
    if(!flg) cout<<"No Profit";
}


int main()
 {
	int t,n; 
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+5];
        for(int i=0;i<n;i++)
        cin>>a[i];
             
        solve(a,n);
        cout<<endl;
        
    }
	return 0;
}
