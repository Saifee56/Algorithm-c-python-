#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int total_nodes=5;

void addEdge(vector <int> graph[],int source, int destination)
{
    //Undirected graph
    graph[source].push_back(destination);
    graph[destination].push_back(source);
}

void BFS(vector<int> graph[], int initial_node)
{
    queue<int> q;
    vector<bool> visited(total_nodes, false);

    q.push(initial_node);
    visited[initial_node] = true;

    while (!q.empty())
    {
        int front_element = q.front();
        q.pop();

        cout << "The visited node is " << front_element <<endl;

        for (int neighbor : graph[front_element])
        {
            if (!visited[neighbor])
            {
                q.push(neighbor);
                visited[neighbor] = true;
            }
        }
    }
}

int main()
{
    vector <int> graph[total_nodes];

    addEdge(graph,0,1);
    addEdge(graph,0,2);
    addEdge(graph,0,3);
    addEdge(graph,2,4);
    addEdge(graph,2,3);

    int initial_node=0;
    BFS(graph,initial_node);
    return 0;
}
