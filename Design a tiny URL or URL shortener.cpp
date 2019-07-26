#include <bits/stdc++.h>
using namespace std;
string shortURL(long int n)
{
    string smallURL;
    
    char map[]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    
    while(n)
    {
        smallURL +=  map[n%62];
        n = n/62;
        
    }
    
    reverse(smallURL.begin(),smallURL.end());
    
    return smallURL;
    
}

long int getUserID(string s)
{
    long long int id=0;
    
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]>='a' && s[i]<= 'z')
        {
            id = (id*62) + s[i]-'a';
        }else if(s[i]>='A' && s[i]<='Z')
        {
            id = (id*62) + s[i]-'A'+ 26;
        }else
        {
            id = (id*62) + s[i]-'0' + 52;
        }
    }
    
    return id;
}
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        long int n;
        cin>>n;
        
        string s = shortURL(n);
        cout<<s<<endl;
        
        long int id = getUserID(s);
        cout<<id<<endl;
    }
	
}
