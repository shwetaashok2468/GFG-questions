/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<list>
using namespace std;

class Graph
{
    //array of lists
    int V;
    //array of linked list
   // int *a = new int[v];
   list<int> *adjList;
   public:
   
   Graph(int v)
   {
       V=v;
       adjList = new list<int>[V];
   }
   void addEdge(int u,int v,bool bidir = true)
   {
       adjList[u].push_back(v);
       
       if(bidir)
       {
           adjList[v].push_back(u);
       }
   }
   
   void printAdjList()
   {
       for(int i=0; i<V; i++)
       {
           cout<<i<<"->";
           for(int j:adjList[i])
           {
               cout<<j<<",";
           }
           cout<<endl;
       }
   }
};



int main()
{
    cout<<"Hello World"<<endl;
    
    
    Graph g(4);
    
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(0,3);
    g.addEdge(1,3);
    g.addEdge(3,2);
    
    
    g.printAdjList();

    return 0;
}

