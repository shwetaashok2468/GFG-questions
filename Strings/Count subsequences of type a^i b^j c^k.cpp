#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n = s.length();
        int aCount=0;
        int bCount = 0;
        int cCount = 0;
        
        
        for(int i=0; i<n; i++)
        {
            if(s[i] == 'a')
            {
                aCount = 1+ 2*aCount;
            }else
            if(s[i] == 'b')
            {
                bCount = aCount + 2*bCount;
            }else
            {
                cCount = bCount + 2*cCount;
            }
        }
        
        cout<<cCount<<endl;
    }

}
