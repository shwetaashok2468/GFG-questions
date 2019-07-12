#include<bits/stdc++.h>
using namespace std;


char nuts[] = {'@', '#', '$', '%', '^', '&', '~', '*', '!'};
char bolts[] = {'$', '%', '&', '^', '@', '#', '!', '~', '*'};

int partition(char *A,int low,int high,int pivot)
{
	int j = low;
	for(int i=low;i<high;i++)
	{
		if(A[i] < pivot)
		{
			
			swap(A[i],A[j]);
			j++;
		}
		else if(A[i] == pivot)
		{
			swap(A[i],A[high]);
			i--;
		}
	}
	swap(A[high],A[j]);
	return j;
}

void matchpairs(char *nuts,char *bolts,int low,int high)
{
	if(high > low)
	{
		int index = partition(nuts,low,high,bolts[high]);
		partition(bolts,low,high,nuts[index]);
		matchpairs(nuts,bolts,low,index-1);
		matchpairs(nuts,bolts,index+1,high);
	}
}

int main(void)
{
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        char nuts[n];
        char bolts[n];
        for(int i=0;i<n;i++)
            cin>>nuts[i];
        for(int i=0;i<n;i++)
            cin>>bolts[i];
        matchpairs(nuts,bolts,0,n-1);
        for(int i=0;i<n;i++)
            cout<<nuts[i]<<" ";
        cout<<endl;
        for(int i=0;i<n;i++)
            cout<<bolts[i]<<" ";
            cout<<endl;
    }
	return 0;
}
