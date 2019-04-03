#include<iostream>
#include<vector>
#include<stack>

using namespace std;
struct Edge
{
  int src, dest;
};

class Graph{
public:
  vector<vector<int>> adjList;
  Graph(vector<Edge> const &Edges, int N);
};


/*Questions:
  1. #inlcude all inside the .h files?
  2. Should we build the DFS inside the Graph class?
  3.
*/
