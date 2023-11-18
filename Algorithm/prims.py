class Graph:
    def __init__(self):
        self.graph = {}

    def add_edge(self, u, v, weight):
        if u not in self.graph:
            self.graph[u] = []
        if v not in self.graph:
            self.graph[v] = []

        self.graph[u].append((v, weight))
        self.graph[v].append((u, weight))

    def prim_mst(self):
        mst = []
        visited = set()
        edges = []  

        start_node = list(self.graph.keys())[0]

        visited.add(start_node)
        for neighbor, weight in self.graph[start_node]:
            edges.append((weight, start_node, neighbor))

        while edges:
            weight, u, v = min(edges)
            edges.remove((weight, u, v))

            if v not in visited:
                mst.append((u, v, weight))
                visited.add(v)
                for neighbor, w in self.graph[v]:
                    edges.append((w, v, neighbor))

        return mst


# Example usage:
g = Graph()
g.add_edge(0, 1, 2)
g.add_edge(0, 3, 6)
g.add_edge(1, 2, 3)
g.add_edge(1, 3, 8)
g.add_edge(1, 4, 5)
g.add_edge(2, 4, 7)
g.add_edge(3, 4, 9)

result = g.prim_mst()
print("Edge \tWeight")
for u, v, weight in result[1:]:
    print(f"{u} - {v}\t{weight}")