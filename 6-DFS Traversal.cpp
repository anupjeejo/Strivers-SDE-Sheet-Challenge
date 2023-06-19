void dfs(vector<int> adjLs[], vector<int> &vis, vector<int> &subResult ,int node)
{
    vis[node] = 1;
    subResult.push_back(node);

    for(auto it : adjLs[node])
    {
        if(vis[it] == 0)
        {
            dfs(adjLs, vis, subResult, it);
        }
    }
}

vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    vector<int> adjLs[V], vis(V, 0);
    vector<vector<int>> result;
    
    for(auto edge : edges)
    {
        adjLs[edge[0]].push_back(edge[1]);
        adjLs[edge[1]].push_back(edge[0]);
    }
    
    for(int i=0; i<V; i++)
    {
        if(vis[i] == 0)
        {
            vector<int> subResult;
            dfs(adjLs, vis, subResult, i);
            result.push_back(subResult);
        }
    }

    return result;
}