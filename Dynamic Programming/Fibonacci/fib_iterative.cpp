/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#define d 1000000007
//o(2^n)
using namespace std;
int main()
{
    cout<<"Hello World"<<endl;
 
   int first = 1;
   int second = 1;
   int n;
   int temp;
   n=10;
   int k=3;
   
   if(n==0 || n==1)
    {
        cout<<"1"<<endl;
    }
   while(k<=n)//while(3<=10)
   {
       temp =  first + second; //3
       if(k == n)
       {
           cout<<(temp%d)<<endl;
       }
       
       first = second;
       second = temp;
       k++;
   }
   
   
   
   
   
   

    return 0;
}

