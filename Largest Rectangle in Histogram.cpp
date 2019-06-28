#include<bits/stdc++.h>
using namespace std;

int funArea(long long int hist[], int n)
{
    long long int max = 0;
    long long int area =0;
    int i=0;
    int curr_max =0;
    stack<int>v;
    while(i<n)
    {
        if(v.empty()|| hist[v.top()] <= hist[i]) 
        {
            v.push(i);
            i++;
        }
        else
        {
            curr_max = v.top(); 
            v.pop();
            area = hist[curr_max] * (v.empty()?i:(i-v.top()-1));
            if(area > max)max = area; 
        }
    }
    while(!v.empty())
    {
        curr_max = v.top();
        v.pop();
        area = hist[curr_max] * (v.empty()?i:i-v.top()-1);
        if(area > max)max = area;
    }
    return max;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long int arr[100000];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        
        cout<<funArea(arr,n)<<endl;
    }
}






