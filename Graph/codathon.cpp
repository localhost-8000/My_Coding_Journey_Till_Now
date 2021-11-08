#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define uli unsigned long long int

void addEdge(vector<pair<int, int>> adj[], int u, int v, int w)
{
    adj[u].push_back(make_pair(v, w));
}

void dfs(vector<pair<int, int>> adj[], int u, bool visited[], stack<int>&st)
{
    visited[u]=true;
    for(auto it = adj[u].begin(); it!=adj[u].end(); it++)
    {
        int v = it->first;
        if(visited[v]==false)
            dfs(adj, v, visited, st);
    }
    st.push(u);
}

void topo_sort(vector<pair<int, int>> adj[], vector<int>& topo, int V)
{
    stack<int> st;
    bool visited[V+1];
    memset(visited, false, V+1);
    for(int i=1; i<=V; ++i)
    {
        if(visited[i]==false)
            dfs(adj, i, visited, st);
    }
    while(!st.empty())
    {
        topo.push_back(st.top());
        st.pop();
    }
    delete visited;
}


uli shortest_path(vector<pair<int, int>> adj[], int V, int k)
{
    vector<uli> dist(V+1, INT_MAX);
    vector<pair<int, int>> vertices(V+1);
    dist[1] = 0;
    for(int u = 1; u<=V; ++u)
    {
        for(auto it = adj[u].begin(); it!=adj[u].end(); it++)
        {
            int v = it->first;
            int w = it->second;
            if(dist[v] > dist[u] + w)
            {
                dist[v] = dist[u] + w;
                vertices[v].first = u;
                vertices[v].second = w;
            }
        }
    }
    uli ans = dist[V];
    int mx = INT_MIN;
    int i=V;
    while(i!=0)
    {
        i = vertices[i].first;
        int w = vertices[i].second;
        mx = max(mx, w);
    }
    return ans-mx+mx/k;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k;
    cin>>n>>m>>k;

    vector<pair<int, int>> adj[n+1];

    for(int i=0; i<n; ++i)
    {
        int u, v, w;
        cin>>u>>v>>w;
        addEdge(adj, u, v, w);
    }

    //vector<int> topo;
    //topo_sort(adj, topo, n);
    cout<<shortest_path(adj, n, k)<<"\n";
}
