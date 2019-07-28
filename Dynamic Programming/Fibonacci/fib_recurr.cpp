//using recusrion

#include <iostream>

using namespace std;

int fib(int n)
{
    if(n==0 || n== 1)
    return 1;
    
    return fib(n-1)+fib(n-2);
}

int main()
{
    cout<<"Hello World"<<endl;
    
    cout<<fib(10-1)<<endl;//(n-1)th fibonacci number 

    return 0;
}

