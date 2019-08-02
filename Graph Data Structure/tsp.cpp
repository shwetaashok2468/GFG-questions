#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//problem of recursion
//bitmask is used 
//dp can be implemented
int n=4;
int dist[10][10]={
    {0,20,42,25},
    {20,0,30,34},
    {42,30,0,10},
    {25,34,10,0}
};

int VISITED_ALL = (1<<n)-1;

int tsp(int mask,int pos)
{
    //mask to denote set of visited cities so far
    //pos -current city index
    //base cases
    if(mask==VISITED_ALL)
    {
        return dist[pos][0];
    }
    
    //now from current node we will try to go to evry other node

    int ans =INT_MAX;
    //visit all the unvisted cities take the best route
    for(int city=0; city<n; city++)
    {
        //see unset bit i.e.unvisited node 
        //check 0000 unvisited 
        
        if((mask & (1<<city))==0)
        {
            //not visited
            int newAns = dist[pos][city]+tsp(mask|(1<<city),city);
            //set bit for next city OR use
            ans = min(ans,newAns);
        }
    }
    
    return ans;
}


int main()
{
     cout<<"Travelling Salesman Distance "<<tsp(1,0);
}
