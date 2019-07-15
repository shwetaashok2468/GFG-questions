#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[1000000];
		
		map<int,int>hash;
		map<int,int>::iterator it;
		
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
			hash[arr[i]]++;
		}
		int temp;
		bool flag == false;
		
		for(it=hash.begin(); it!=hash.end(); it++)
		{
			if(it->second > n/2)
			{
				flag = true;
				temp = it->first;
				break;
			}
		}
		
		if(flag == false)
		{
			cout<<-1<<endl;
		}else
		{
			cout<<temp<<endl;
		}
	}
}
