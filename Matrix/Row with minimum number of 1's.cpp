
/*
Determine the row index with minimum number of ones. The given 2D matrix has only zeroes and ones and also the matrix is sorted row wise. If two or more rows have same number of 1's than print the row with smallest index.

Input:
The first line of input contains an integer T denoting the number of test cases. The first line of each test case consists of two integer n and m. The next line consists of n*m spaced integers. 

Output:
Print the index of the row with minimum number of 1's. If there is 0 number of '1' in the matrix then, print '-1'.

Constraints: 
1 <= T <= 103
1 <= n, m <= 100

Example:
Input:
2
3 3
0 0 0 0 0 0 0 0 0
4 4
0 0 0 1 0 1 1 1 0 0 1 1 0 0 1 1

Output:
-1
0

Explanation:
Testcase 2: The matrix formed for the given input will be as such
0 0 0 1
0 1 1 1
0 0 1 1
0 0 1 1
First row is having minimum number of 1 i.e. answer is 0.

*/
#include <bits/stdc++.h>
using namespace std;


int BinarySearch(int arr[],int low,int high){
    int mid,result=-1;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==0){
            result=mid;
            low=mid+1;
        }
        else if(arr[mid]>0){
            high=mid-1;
        }
        else low=mid+1;
    }
    return result;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int m,n;
	    cin>>m;
	    cin>>n;
	    int arr[m][n];
	    
	    for(int i=0; i<m; i++)
	    {
	        for(int j=0; j<n; j++)
	        {
	            cin>>arr[i][j];
	        }
	    }
	    int count;
	    int count_so_far = n;
	    int res=-1;
	    bool check = false;
	  
	    for(int i=0;i<m; i++)
	    {
	        int index = BinarySearch(arr[i],0,n-1);
	        count = n-index-1;
	        if(count < count_so_far && index != -1 && n-index >1)
	        {
	            count_so_far = count;//1
	            res = i;//0
	            check = true;
	            
	        }
	        if(index == -1 && check == false)
	        {
	            res = i;
	           check =true;
	            
	            
	        }
	    }
	    cout<<res<<endl;
	   
	}
}
