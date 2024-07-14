import java.util.*;

public class breadth_first_search {
    static class Edge{
        int src;
        int dest;

        Edge(int s, int d){
            this.src=s;
            this.dest=d;
        }
    }
    public static void createGraph(ArrayList<Edge> graph[]){
        for(int i=0;i<graph.length;i++){
            graph[i]=new ArrayList<>();  //New arraylist to store values at empty places. As it was null before
        }
        graph[0].add(new Edge(0,2));
        graph[1].add(new Edge(1,2));
        graph[1].add(new Edge(1,3));
        graph[2].add(new Edge(2,0));
        graph[2].add(new Edge(2,1));
        graph[2].add(new Edge(2,3));
        graph[3].add(new Edge(3,1));
        graph[3].add(new Edge(3,2));
    }
    public static void bfs(ArrayList<Edge> graph[],int V){
        Queue<Integer> q=new LinkedList<>();
        boolean visited[]=new boolean[V];
        q.add(0);

        while(!q.isEmpty()){
            int curr=q.remove();
            if(visited[curr]==false){
                System.out.print(curr+" ");
                visited[curr]=true;
                for(int i=0;i<graph[curr].size();i++){
                    Edge e=graph[curr].get(i);
                    q.add(e.dest);
                }
            }
        }

    }
    public static void main(String[] args) {
        int V=4;
        ArrayList<Edge> graph[]=new ArrayList[V]; //Array of Arraylist
        createGraph(graph);
        bfs(graph,V);
//        for(int i=0;i<graph[0].size();i++){
//            Edge e=graph[0].get(i);
//            System.out.println(e.dest+" ");
//        }
    }
}
