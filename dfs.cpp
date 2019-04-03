#include "dfs.h"

Graph::Graph(vector<Edge> const &edges, int N)
{
  adjList.resize(N);
  for(auto &edges: edges)
  {
    adjList[edges.src].push_back(edges.dest);
    adjList[edges.dest].push_back(edges.src);
  }
}
