#include <iostream>
#include <vector>
#include "dfs.h"
using namespace std;

void DFS(Graph const &graph, int v, vector<bool> &visited)
{
  visited[v] = true;
  cout << v << " ";
  for(int u: graph.adjList[v])//For every edge
  {
    if(!visited[u]) DFS(graph, u, visited);
  }
}

int main()
{
  vector<Edge> edges = {{1,2},{1,7},{1,8},{2,3},{2,6},
                        {3,4},{3,5},{8,9},{8,12},
                        {9,10},{9,11}};
  int N = 13;
  Graph graph(edges,N);
  vector<bool> visited(N);
  for(int i=0; i<N; i++)
  {
    if(visited[i]==false)
    {
      DFS(graph,i,visited);
    }
  }
  return 0;
}
