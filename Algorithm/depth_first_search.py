class Graph:
    def __init__(self):
        self.graph = {}

    def add_edge(self, e, v):
        if e in self.graph:
            self.graph[e].append(v)
        else:
            self.graph[e] = [v]

class DFS:
    def __init__(self, graph):
        self.graph = graph

    def dfs(self, start_node):
        visited = set()

        def dfs_recursive(node):
            visited.add(node)
            print(node, end=' ')

            if node in self.graph:
                for neighbor in self.graph[node]:
                    if neighbor not in visited:
                        dfs_recursive(neighbor)

        dfs_recursive(start_node)


g = Graph()
g.add_edge(0,5)
g.add_edge(0,6)
g.add_edge(0,7)
g.add_edge(5,8)
g.add_edge(6,9)
g.add_edge(7,10)
g.add_edge(8,11)
g.add_edge(9,12)
g.add_edge(10,13)

dfs_tree = DFS(g.graph)
print("DFS traversal starting from node 0:")
dfs_tree.dfs(0)