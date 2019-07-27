/*Given an array A and an integer K. Find the maximum for each and every contiguous subarray of size K.

Input:
The first line of input contains an integer T denoting the number of test cases. The first line of each test case contains a single integer N denoting the size of array and the size of subarray K. The second line contains N space-separated integers A1, A2, ..., AN denoting the elements of the array.

Output:
Print the maximum for every subarray of size k.
Input:
2
9 3
1 2 3 1 4 5 2 3 6
10 4
8 5 10 7 9 4 15 12 90 13

Output:
3 3 4 5 5 5 6
10 10 10 15 15 90 90

Explanation:
Testcase 1: Starting from first subarray of size k = 3, 
we have 3 as maximum. Moving the window forward, maximum element 
are as 3, 4, 5, 5, 5 and 6.*/



#include <iostream>
#include<deque>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
         int n;
         cin>>n;
         int a[n];
         int k;
         cin>>k;
 
   for(int i=0; i<n; i++ )
   {
       cin>>a[i];
   }
   
   deque<int>Q;//k is size
   int i;
  
   for(i=0; i<k; i++)
   {
       while(!Q.empty() && a[i] > a[Q.back()])
       {
           Q.pop_back();
       }
       
       Q.push_back(i);
   }
   cout<<a[Q.front()]<<" ";
   for(; i<n; i++)
   {
       //1. Remove the elements which are not part of window(Contraction)
       
       while((!Q.empty() && Q.front()<= i-k))
       {
           Q.pop_front();
       }
      
       //2.Remove elements which are not usefull and are in window
         while((!Q.empty()) && a[i]>= a[Q.back()])
       {
           Q.pop_back();
       }
       //3.Add the new elements(Expansions)
       
       Q.push_back(i);
       
       cout<<a[Q.front()]<<" ";
   
   }

        cout<<endl;
      
    }
    
    
}

   
  
