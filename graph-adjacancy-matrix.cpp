#include <iostream>
#include <queue>
using namespace std;

void bfs(int adjMat[][8], int V, int e, int start)
{
  queue<int> q;
  q.push(start);
  int vis[V];
  vis[start] = 1;

  while(q.empty() != true)
  {
    int node = q.front();
    cout << node << " ";
    q.pop();

    for(int i = 0; i < V; i++)
    {
      if(adjMat[node][i] == 1 && vis[i] != 1)
      {
        q.push(i);
        vis[i] = 1;
      }
    }
  }
  cout << endl;
}

int main()
{
  int V = 8;
  int e = 10;

  int edges[10][2] = {{6,7},{6,5},{5,0},{5,1},{1,3},{2,3},{4,1},{4,2},{1,2},{0,1}};

  int adjMat[8][8];

  for(int i = 0; i < e; i++)
  {
    int u = edges[i][0];
    int v = edges[i][1];

    adjMat[u][v] = 1;
    adjMat[v][u] = 1;
  }

  bfs(adjMat, V, e, 0);
}