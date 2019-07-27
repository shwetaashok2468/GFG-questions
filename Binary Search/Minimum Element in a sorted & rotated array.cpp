

/*
A sorted array A[ ] with distinct elements is rotated at some unknown point, the task is to find the minimum element in it.

Expected Time Complexity: O(Log n)

Input:

The first line of input contains a single integer T denoting the number of test cases. Then T test cases follow. Each test case consist of two lines. The first line of each test case consists of an integer N, where N is the size of array.
The second line of each test case contains N space separated integers denoting array elements.

Output:
Corresponding to each test case, in a new line, print the minimum element in the array.

Constraints:

1 = T = 200
1 = N = 500
1 = A[i] = 1000

Example:

Input
2
5
4 5 1 2 3
6
10 20 30 40 50 5 7

Output
1
5
*/





#include <bits/stdc++.h>
using namespace std;


int binarySearch(int arr[],int low,int high,int n)
{
    while(low<=high)
    {
        //11 12 2 4 5 8 9 
        //arr[mid]=2
        if(arr[low]<= arr[high])
        return low;
        
        
        
        int mid = (low+high)/2;
        int next = (mid+1)%n; 
        int prev = (mid-1)%n;
    
        if( arr[mid] <= arr[next] && arr[prev] >= arr[mid])
        return mid;
        else if(arr[mid] <= arr[high])
        high = mid-1;
        else if(arr[mid] >= arr[low])
        low = mid+1;
        
    }
    
    return -1;
    
}

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        int arr[1000000];
        
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        
        
        int index = binarySearch(arr,0,n-1,n);
        
        
        
        cout<<arr[index]<<endl;
    }

}
