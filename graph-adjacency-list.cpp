#include <iostream>
#include <vector>
using namespace std;

void dfs(vector<int> adj[], int start, int vis[])
{
  vis[start] = 1;
  cout << start << " ";

  for(int i = 0; i < adj[start].size(); i++)
  {
    int neb = adj[start][i];
    if(vis[neb] != 1)
    {
      dfs(adj, neb, vis);
    }
  }
}

int main()
{
  int V = 11;
  int e = 13;

  int edges[13][2] = {{6,7},{6,5},{5,0},{5,1},{1,3},{2,3},{4,1},{4,2},{1,2},{0,1},{10,8},{8,9},{9,10}};

  vector<int> adj[V];

  for(int i = 0; i < e; i++)
  {
    int u = edges[i][0];
    int v = edges[i][1];

    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  int vis[V];

  for(int i = 0; i < V; i++)
  {
    if(vis[i] != 1)
    {
      dfs(adj, i, vis);
    }
  }
}