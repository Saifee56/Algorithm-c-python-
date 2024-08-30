#include <iostream>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

void addEdge(vector<int> adj[], int source,int destination)
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



//Iterative approach
void DFS(vector<int>adj[],int start,int vertices)
{
    vector<bool>visited(vertices,false);
    stack<int>s;

    s.push(start);
    while(!s.empty())
    {
        int current=s.top();
        s.pop();
        if(!visited[current])
        {
            visited[current]=true;
            cout<<current<<" ";
        }
        for(int i=0;i<adj[current].size();i++)
        {
            int neighbor=adj[current][i];
            if(!visited[neighbor])
            {
                s.push(neighbor);
            }
        }
    }
}
int main() {
  int V = 11;

  vector<int> adj[V];
  addEdge(adj, 0, 1);
  addEdge(adj, 0, 3);
  addEdge(adj, 0, 6);
  addEdge(adj, 1, 2);
  addEdge(adj, 1, 4);
  addEdge(adj, 1, 4);
  addEdge(adj, 1, 4);
  addEdge(adj, 4, 5);

  AdjacencyList(adj, V);
  DFS(adj,0,V);

  return 0;
}
