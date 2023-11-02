class Graph:
    def __init__(self):
        self.graph={}

    def add_edge(self,e,v):
        if e in self.graph:
            self.graph[e].append(v)
        else:
            self.graph[e]=[v]

class BFS:
    def __init__(self,graph):
        self.graph=graph

    def bfs(self,root_node):
        visited=set()
        queue=[]

        visited.add(root_node)
        queue.append(root_node)

        while queue:
            node=queue.pop(0)
            print(node, end=' ')

            if node in self.graph:
                for neighbor in self.graph[node]:
                    if neighbor not in visited:
                        visited.add(neighbor)
                        queue.append(neighbor)

g=Graph()
g.add_edge(0,5)
g.add_edge(0,6)
g.add_edge(0,7)
g.add_edge(5,8)
g.add_edge(6,9)
g.add_edge(7,10)
g.add_edge(8,11)
g.add_edge(9,12)
g.add_edge(10,13)

bfs_tree=BFS(g.graph)
print("BFS starts from node 0")
bfs_tree.bfs(0)
