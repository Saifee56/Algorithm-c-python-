#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void addEdge(vector<int> adj[],int source, int destination)
{
    adj[source].push_back(destination);
    adj[destination].push_back(source);
}

void AdjacencyList(vector<int> adj[],int vertices)
{
    for(int i=0;i<vertices;i++)
    {

        cout<<i;
        for(int j=0;j<adj[i].size();j++)
        {
            cout<<"->"<<adj[i][j];
        }
        cout<<"\n";

    }

}

void BFS(vector<int> adj[],int start,int vertices)
{
    vector<bool> visited(vertices,false);
    queue<int>q;

    visited[start]=true;
    q.push(start);

    while(!q.empty())
    {
        int current=q.front();
        q.pop();
        cout<<current<<" ";

        for(int i=0;i<adj[current].size();i++)
        {
            int neighbor=adj[current][i];
            if(!visited[neighbor])
            {
                visited[neighbor]=true;
                q.push(neighbor);
            }
        }
    }
}
int main() {
  int V = 11;

  vector<int> adj[V];

  addEdge(adj, 7, 5);
  addEdge(adj, 7, 3);
  addEdge(adj, 5, 3);
  addEdge(adj, 5, 2);
  addEdge(adj, 2, 10);
  addEdge(adj, 3, 8);

  AdjacencyList(adj, V);
  BFS(adj,7,V);
  return 0;
}
