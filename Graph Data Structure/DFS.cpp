/*This is a function problem.You only need to complete the function given below*/
/* Function to do DFS of graph
*  g[]: array of vectors to represent graph
*  vis[]: array to keep track of visited vertex
*/

  
  

void dfs(int u, vector<int> adj[], bool visited[])
{
     visited[u]=true;
      cout<<u<<" ";
      
     for(auto it=adj[u].begin(); it!=adj[u].end(); it++)
      {
          if(!visited[*it])
          dfs(*it,adj,visited);
      }
    
    
    
}
