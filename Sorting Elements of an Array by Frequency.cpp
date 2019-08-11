#include <bits/stdc++.h>
using namespace std;
bool compare(const pair<int,int>&p1, const pair<int,int>&p2)
{
    
    if(p1.second != p2.second)
    return(p1.second > p2.second);
    else
    return(p1.first<p2.first);
}

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<int,int>hash;
        map<int,int>::iterator it;
        int arr[150];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            hash[arr[i]]++;
        }
        vector<pair<int,int> > v;
        for(it = hash.begin(); it!=hash.end(); it++)
        {
            v.push_back(make_pair(it->first,it->second));
        }
        
        sort(v.begin(),v.end(),compare);
        
        
        for(int i=0; i<v.size(); i++)
        {
            while(v[i].second--)
            cout<<v[i].first<<" ";
        }
        
        
        cout<<endl;
        
        
    }
	
}
