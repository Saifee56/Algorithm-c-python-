import java.util.ArrayList;

public class depth_first_search {

    static class Edge{
        int source;
        int destination;

        Edge(int s, int d){
            this.source=s;
            this.destination=d;
        }
    }
    public static void creategraph(ArrayList<Edge> graph[]){
        for(int i=0;i<graph.length;i++){
            graph[i]=new ArrayList<>();
        }
        graph[0].add(new Edge(0,1));
        graph[0].add(new Edge(0,2));
        graph[1].add(new Edge(1,3));
        graph[2].add(new Edge(2,4));
        graph[3].add(new Edge(3,4));
        graph[3].add(new Edge(3,5));
        graph[3].add(new Edge(3,2));
        graph[4].add(new Edge(4,2));
        graph[4].add(new Edge(4,5));
        graph[5].add(new Edge(5,6));
    }

    //DFS function
    public static void dfs(ArrayList<Edge> graph[],boolean[]visited, int current){
        System.out.print(current + " ");
        visited[current]=true;

        for(int i=0;i<graph[current].size();i++){
            Edge e=graph[current].get(i);
            if(!visited[e.destination]){
                dfs(graph,visited,e.destination);
            }
        }
    }
    public static void main(String[] args) {

        int vertices = 7;
        ArrayList<Edge>[] graph = new ArrayList[vertices];
        creategraph(graph);

        boolean[] visited = new boolean[vertices];
        System.out.println("Depth First Search starting from vertex 0:");
        dfs(graph, visited, 0);
    }
}
