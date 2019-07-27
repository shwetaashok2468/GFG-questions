#include<bits/stdc++.h>
using namespace std;

bool balancedParenthesis(string str)
{
    stack<char>v;
        
    char x;
    for(int i=0; str[i]!='\0'; i++)
        {
            if(str[i] == '[' || str[i] == '{' || str[i] == '(')
            {
                v.push(str[i]);
                continue;
            }
        
            if(v.empty())
            {
                return false;
            }
         
            switch(str[i])
            {
                case ')': x = v.top();
                          v.pop();
                          if(x== '{'|| x == '[')
                          {
                             return false; 
                          }
                          break;
               
                
                case '}': x = v.top();
                          v.pop();
                          if(x== '('|| x == '[')
                          {
                              return false;
                          }
                          
                          break;
                
                case ']': x = v.top();
                          v.pop();
                          if( x== '{'|| x == '(')
                          {
                              return false;
                          }
                         
                          break;
            }
           
        }
       return(v.empty()); 
}

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        getline(cin,str);
        
        while(str.length()==0)
        getline(cin,str);
       
       
        if(balancedParenthesis(str))
        {
            cout<<"balanced"<<endl;
        }else
        {
            cout<<"not balanced"<<endl;
        }
        
        
       
    }
	
}
