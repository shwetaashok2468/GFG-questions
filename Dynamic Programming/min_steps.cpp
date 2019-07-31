
#include <bits/stdc++.h> 
using namespace std; 


int getMinSteps(int n, int *step) 
{ 
	// base case 
	if (n == 1) 
	return 0; 
	
	
	if (step[n] != -1) 
	return step[n]; 

	
	int res = getMinSteps(n-1, step); 

	if (n%2 == 0) 
		res = min(res, getMinSteps(n/2, step)); 
	if (n%3 == 0) 
		res = min(res, getMinSteps(n/3, step)); 

	step[n] = 1 + res; 
	return step[n]; 
} 

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        	int n;
        	cin>>n;
        	
        	int arr[n+1];
        	
        		for (int i=0; i<=n; i++)
        		arr[i]=-1;
        	
        	
	        cout << getMinSteps(n,arr)<<endl;
        
    }

} 

