/*This is a function problem.You only need to complete the function given below*/
/* You have to complete this function*/
/* Function to do BFS of graph
*  adj[]: array of vectors
*  vis[]: array to keep track of visited nodes
*/
void bfs(int src, vector<int> adj[], bool visited[])
{
    
    
        queue<int>q;
    
        
        q.push(src);
        visited[src] =true;
     
        
        while(!q.empty())
        {
            int node  = q.front();
            q.pop();
            
            cout<<node<<" ";
            
            for(int neighbour:adj[node])
            {
                if(!visited[neighbour])
                {
                    q.push(neighbour);
                    visited[neighbour]=true;
                  
                }
            }
        }
      
    
}
