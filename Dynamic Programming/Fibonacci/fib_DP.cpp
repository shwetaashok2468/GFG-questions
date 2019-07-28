/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
#define d 1000000007


void fibonacci( int n,int fib[])
{
        fib[0]=0;
        fib[1]=1;
    
    for(int i=2; i<=n; i++)
    {
        fib[i] = (fib[i-1]+fib[i-2])%d;
    }
    
}


int main()
{
    cout<<"Hello World"<<endl;
    
     int fib[100000];
     int n;
 
    fibonacci(100,fib);//prepared the fibonacci series of 100 elements in o(n) 
       cout<<fib[16]<<" ";//printing nth fib number in o(1)
  
    return 0;
}

