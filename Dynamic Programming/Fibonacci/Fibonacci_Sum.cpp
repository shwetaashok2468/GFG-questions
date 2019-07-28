#include <iostream>
#define d 1000000007
using namespace std;

void  calculateSum(unsigned long long int fibSum[])
{
  
    unsigned long long int num1 = 0;
    unsigned long long int num2 = 1;
    unsigned long long int num3;
    unsigned long long int result;
    result = num2;
    
    fibSum[0] = num1;
    fibSum[1] = 1;
    
    for(int i=2; i<=100000; i++)
    {
        num3 = (num1 + num2)%d;
        result = (result+num3)%d;
        num1 = num2;
        num2 = num3;
        fibSum[i] = result;
    }
}

int main() {

	unsigned long long int fib[100000];
	calculateSum(fib);
	int t;
    cin>>t;
	while(t--)
	{
	    unsigned long long int n;
	    cin>>n;
	    
	    cout<<fib[n]<<endl;
	}
}
