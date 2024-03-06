class Solution{
    public:

    vector<int> bfs(int V, vector<int>adj[])
    {
        int visited[V] = {0};
        vis[0] = 1;
        queue<int> q;
        q.push(0);
        vector<int>bfs;

        while(!q.empty())
        {
            int  node = q.front();
            q.pop();
            bfs.push(node);
            for(auto it : adj[node])
            {
                if(!vis[it])
                {
                    vis[it];
                    q.push(it);
                }
            } 
        }

    }
};