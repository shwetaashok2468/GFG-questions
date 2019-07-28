/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int min(int x, int y, int z) 
{ 
   return min(min(x, y), z); 
} 

int editDistance(string str1,string str2,int s1,int s2)
{
    int edit[s1+1][s2+1];
    
    for(int i=0; i<=s1; i++)
    {
        for(int j=0; j<=s2; j++)
        {
            if(i==0)
            {
                edit[i][j] = j;
            }
            else if(j==0)
            {
                edit[i][j] = i;
            }
            else if(str1[i-1] == str2[j-1])
            {
                edit[i][j] = edit[i-1][j-1];
            }
            else
            {
                edit[i][j]  = 1 + min(edit[i-1][j-1],edit[i][j-1],edit[i-1][j]);
            }
        }
    }
    return edit[s1][s2];
}

int main()
{ 
    string str1 = "shweta"; 
    string str2 = "hwetaashok"; 
  
    cout << editDistance( str1 , str2 , str1.length(), str2.length()); 
  
}

