#include<bits/stdc++.h>
using namespace std;
void zeroSumSubarray(int arr[], int n, int sum)
{
	unordered_map<int, int> map; 
//	unordered_map<int,int>::iterator x;
	
	int curr_sum = 0;
	
	int count=0; 
    for (int i = 0; i < n; i++)
	{
		curr_sum = curr_sum + arr[i];
		
    	if (curr_sum == sum)
		{
		//	count++;
		    cout<<0<<" "<<i<<endl;
		}

		if(map.find(curr_sum-sum)!=map.end())
		{
		   // count+=map[curr_sum-sum];
		   cout<<map[curr_sum-sum]+1<<" "<<i<<endl;
		}
		
		
		
		map[curr_sum] = i;
	}
//	cout <<count<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,sum=0;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    
	    zeroSumSubarray(arr, n, 0);
	    cout<<endl;
	}
	return 0;
}
