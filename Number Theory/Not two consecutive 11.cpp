#include <iostream>
using namespace std;
#define d 1000000007


int binary(int n)
{
    int a[n];
    int b[n];
    
    a[0] = 1;
    b[0] = 1;
    
    for(int i=1; i<n; i++)
    {
        a[i] = (a[i-1] + b[i-1])%d;;
        b[i] = a[i-1]%d;
    }
    
    int ans = (a[n-1]+b[n-1])%d;
    return ans;
}

int main() {
int t;
cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        cout<<binary(n)<<endl;
    }
}
