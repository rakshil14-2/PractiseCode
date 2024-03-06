// #include<iostream>
using namespace
// IF graph is one based then size will be n+1, else only n

int main()
{
    int n, m;
    cin>>n>>m;
    vector<int>adj[n+1]; // for weighted graph store in pairs 

    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    return 0;

}