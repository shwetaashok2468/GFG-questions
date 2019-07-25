#include <bits/stdc++.h>
using namespace std;

bool panagrams(char str[],int k)
{
    int len;
    for( len=0; str[len]!='\0'; len++);
    
    if(len<26)
    return false;
    
    
       int count =0;
        
        int map[26]={false};
        for(int i=0; str[i]!='\0'; i++)
        {
            int index = str[i]-'a';
            map[index]=true;
        }
        
        for(int i=0; i<26; i++)
        {
            if(!map[i])
            {
                count++;
            }
        }
        
        if(count<= k)
        {
            return true;
        }else
        {
            return false;
        }
    
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char str[100000];
        cin>>str;
        
        int c;
        cin>>c;
        
        
        
        if(panagrams(str,c))
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
        
       // cout<<count<<endl;
    }

}
