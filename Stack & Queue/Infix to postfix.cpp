#include <bits/stdc++.h>
using namespace std;

int precedence(char c) 
{ 
    if(c == '^') 
    return 3; 
    else if(c == '*' || c == '/') 
    return 2; 
    else if(c == '+' || c == '-') 
    return 1; 
    else
    return -1; 
} 


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,exp;
        cin>>s;
        stack<char>v;
        v.push('$');
       
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='(')
            {
                v.push(s[i]);
            }
            
            /*************************************************************/
            else if(isalpha(s[i]))
            {
                exp = exp + s[i]; //A 
            }
            
             /*************************************************************/
            else if(s[i]==')')
            {
                while(v.top()!='$' && v.top()!='(')
                {
                    exp = exp + v.top();
                    v.pop();
                }
                
                if(v.top() == '(')
                {
                    v.pop();
                }
            }
            
             /*************************************************************/
            
            else{
                
                    while(precedence(s[i]) <= precedence(v.top()) && v.top()!='$')
                    {
                            exp = exp + v.top(); 
                            v.pop();
                    }
                     v.push(s[i]);
                }
                
              /*************************************************************/  
                
        }
        
        while(v.top()!='$')
        {
            exp = exp + v.top();
            v.pop();
        }
        
        cout<<exp<<endl;
    }
}
