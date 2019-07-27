#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        stack<int>v;
        
        for(int i=0; i<s.length(); i++)
        {
            if(s[i] == ' ')continue;
            else if(isdigit(s[i]))
            {
                int num =0;
                num = 10*num + (s[i] - '0');
                v.push(num);
            }
            else
            {
                int temp1 = v.top(); 
                v.pop();
                int  temp2 = v.top();
                v.pop();
                
                switch(s[i])
                {
                    case'+':v.push(temp1 + temp2);
                            break;
                    
                    case'-':v.push(temp2 - temp1);
                            break;
                            
                    case'*':v.push(temp2*temp1);
                            break;
                            
                    case'/':v.push(temp2/temp1);
                            break;
                }
                
            
            }
        }
        
        cout<<v.top()<<endl;
        
        
    }
	
}
