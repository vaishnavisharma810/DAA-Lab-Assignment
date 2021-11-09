#include<iostream>
#include<vector>
#include<queue>
#include<bits/stdc++.h>
using namespace std;

void floydWarshall(vector<int> adj[], int V)
{
    int dist[V][V], i, j, k, INF = 1e9;
    for (i = 0; i < V; i++)
    {
        for (j = 0; j < V; j++)
            dist[i][j] = adj[i][j];
    }
    for (k = 0; k < V; k++)
    {
        for (i = 0; i < V; i++)
        {
            for (j = 0; j < V; j++)
            {
                if (dist[i][j] > (dist[i][k] + dist[k][j]) && (dist[k][j] != INF && dist[i][k] != INF))
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }
    cout << "The following matrix shows the shortest distances between every pair of vertices" << endl;
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            if (dist[i][j] == INF)
                cout << "INF" << "     ";
            else
                cout << dist[i][j] << "     ";
        }
        cout << endl;
    }
}

int main()
{
    int n, m;
    cout << "Enter number of nodes and edges" << endl;
    cin >> n >> m;
    vector<int> adj[n + 1];
    for(int i = 0; i < m; i++)
    {
        int u, v;
        cout << "Enter nodes having edges (u -> v)" << endl;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    floydWarshall(adj, n);
    return 0;
}

