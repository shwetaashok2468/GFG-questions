#include <bits/stdc++.h>
using namespace std;


int express(int x,int n, int curr_num)
{
    int val = (x-pow(curr_num,n));
    
    if(val<0)
    return 0;
    
    if(val==0)
    {
        return 1;
    }
    
    return express(val,n,curr_num+1)+express(x,n,curr_num+1);
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int x,n;
        cin>>x;
        cin>>n;
        
        
        cout<<express(x,n,1)<<endl;
    }

}
