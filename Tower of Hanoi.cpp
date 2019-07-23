#include <iostream>
using namespace std;
void TOH(int n,char x,char y,char z,int &ans)
{
    if(n<=0)
    return;
    
    if(n>0)
    {
        TOH(n-1,x,z,y ,ans);
        cout<<"move disk "<<n<<" from rod "<<x<<" to rod "<<z<<endl;
        ans++;
        TOH(n-1,y,x,z,ans);
    }
    else if(n==1)
    {
        cout<<"move disk "<<n<<" from rod "<<x<<" to rod "<<y<<endl;
        ans++;
    }
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int ans =0;
	    
	    
	    TOH(n,'1','2','3',ans);
	    cout<<ans<<endl;
	}
    
}
