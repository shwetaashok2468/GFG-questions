#include <iostream>
using namespace std;
const unsigned int d=1000000007;

unsigned long long int pow(unsigned long long int x, unsigned long long int n)
{
             
            
            if(n==0)
            return 1;
            
            if(x==0)
            return 0;
            
            
            unsigned long long int temp,ans;
            
            temp = pow(x,n/2);
            
            if(n%2==0)
            {
            ans = ((temp%d)*(temp%d))%d;
            }
            
            else
            {
            ans = ((((x%d)*(temp%d))%d)*(temp%d))%d;
            }
            if (ans>=0)
            return ans%d;
            
            else{
                ans = (ans%d)+d;
                ans = ans%d;
            
            
            
            }
                return ans;
}

unsigned long long int reverse(unsigned long long int num)
{
    long long int n = num;
    long long int rev=0;
    //27
        while(n)
        {
            long long int remainder = n%10;
            rev = rev*10 + remainder;//72
            n = n/10;//2
            
        }
        
        return rev;
}

int main() {
    
    int t;
    cin>>t;
    while(t--)
    {
        unsigned long long int n;
        cin>>n;
        unsigned long long int r = reverse(n);
        
        cout<<pow(n,r)<<endl;
        
    }
	//code
	return 0;
}
