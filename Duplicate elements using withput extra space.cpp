/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    //printf("Hello World");
    
    int arr[]={1,1,2,3,3,4,5,5,7};
    int n = 9;
    
/*
     arr[i]  i    arr[abs(arr[i])]
        3    0      3
        -2    1      1
        -1    2      2
        =3    3      3
    */

    for(int i=0; i<n; i++)
    {
        if(arr[abs(arr[i])]>0)
        arr[abs(arr[i])]= -arr[abs(arr[i])];
        else{
            cout<<abs(arr[i])<<endl;
        }
        
        
    }
    cout<<endl;
    
    

    return 0;
}


