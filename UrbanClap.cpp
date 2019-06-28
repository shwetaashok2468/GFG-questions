/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

map<string,int> points;
map<string,int> score;

bool myCompare(string a, string b){
    if(points[a]>points[b])
    {
        return true;
    }
    
    if(points[a]==points[b])
    {
        if(score[a]>score[b])
        {
            return true;
        }
    }
    
}
int main()
{
  
    
    points["CSK"]=6;
    points["KSIP"]=6;
    points["KKR"]=4;
    points["RR"]=7;
    
    score["CSK"]=23;
    score["KSIP"]=47;
    score["KKR"]=33;
    score["RR"]=24;
    
    string teams[]={"CSK","KSIP","KKR","RR"};
    //RR KSIP CSK KKR 
    
    sort(teams,teams+4, myCompare);
    //
    for(int i=0;i<4;i++)
    {
        cout<<teams[i]<<" ";
    }
    
    
    

    return 0;
}


