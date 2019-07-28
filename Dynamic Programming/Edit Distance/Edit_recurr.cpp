/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//complexity O(3^m)

#include <iostream>
using namespace std;

int min(int x, int y, int z) 
{ 
   return min(min(x, y), z); 
} 

int editDistance(string str1,string str2,int s1,int s2)
{
    if(s1 == 0)
    {
        return s2;//insert all the elements from the 2nd str
    }
    
    if(s2 == 0)
    {
        return s1;
    }
    
    
    if(str1[s1-1] == str2[s2-1] )
    {
        return editDistance(str1,str2,s1-1,s2-1);
    }
    
    return 1+ min(editDistance(str1,str2,s1,s2-1) ,editDistance(str1,str2,s1-1,s2),editDistance(str1,str2,s1-1,s2-1));
}

int main()
{ 
    string str1 = "shweta"; 
    string str2 = "hwetaashok"; 
  
    cout << editDistance( str1 , str2 , str1.length(), str2.length()); 
  
}

