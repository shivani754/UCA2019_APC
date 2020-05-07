/*class Garph{
    private int V;
    private LinkedList<Integer>adj[];
    public Graph(int v){
        V=v;
        adj=new LinkedList[v];
        for(int i=0;i<V;i++)
            adj[i]=new LinkedList();
    }
  /*  void addEdge(int a,int b)
    {
        adj[a].add(b);
    }*/
  /*  int solve(int A,ArrayList<Integer> B,ArrayList<Integer>C)
    {
        for(int i=0;i<B.size();i++)
        {
            adj.get(B.get(i)).add(C.get(i));
            int visisted[]=new vusited[A];
            for(int i=0;i<A;i++)
            visited[i].color=WHITE;
        }
        for(int i=0;i<A.size();i++)
        {
            if(visited[i)==color.WHITE)
            {
                if(!dfs(i,adj,visited)
                return 0;
            }
            return 1;
        }
    }
    public int dfs(int u,LinkedList<LinkedList<Integer>> adj,int visited[])
    {
        visited[u]=color.GREY;
        Iterator<Integer>itr=adj[u].iterator();
        while(itr.hasNext()){
            Integer v=itr.next();
            if(visited[v]==color.WHITE)
                dfs(v,adj,visted);
            else if(visited[v]==color.BLACK)
                 continue;
            else return 0;
        }
        visited[u]=color.BLACK;
        return 1;
    }
}*/
public class Topological{
     public  enum color{WHITE,GREY,BLACK;}
     public static void main(String []args){
        // Graph g = new Graph(6); 
        // g.addEdge(5, 2); 
        // g.addEdge(5, 0); 
        // g.addEdge(4, 0); 
        // g.addEdge(4, 1); 
        // g.addEdge(2, 3); 
        // g.addEdge(3, 1); 
       
        LinkedList<Integer>adj=new LinkedList[v];
        for(int i=0;i<V;i++)
            adj[i]=new LinkedList();
        Scanner s=new Scanner(System.in);
        int a=s.nextInt();
        ArrayList<Integer>B=new ArrayList<Integer>(2);
        for(int i=0;i<2;i++)
        B[i]=s.nextInt();
        ArrayList<Integer>C=new ArrayList<Integer>(2);
        for(int i=0;i<2;i++)
        C[i]=s.nextInt();
        System.out.println(solve(a,B,C));
            
     }
     public static int solve(int A,ArrayList<Integer> B,ArrayList<Integer>C)
    {
        int visited[]=new visited[A];
        for(int i=0;i<B.size();i++)
        {
            adj.get(B.get(i)).add(C.get(i));
            
            for(int i=0;i<A.size();i++)
            visited[i].color=WHITE;
        }
        for(int i=0;i<A.size();i++)
        {
            if(visited[i]==color.WHITE)
            {
                if(!dfs(i,adj,visited))
                return 0;
            }
            return 1;
        }
    }
    public static int dfs(int u,LinkedList<LinkedList<Integer>> adj,int visited[])
    {
        visited[u]=color.GREY;
        Iterator<Integer>itr=adj[u].iterator();
        while(itr.hasNext()){
            Integer v=itr.next();
            if(visited[v]==(int)color.WHITE)
                dfs(v,adj,visted);
            else if(visited[v]==(int)color.BLACK)
                 continue;
            else return 0;
        }
        visited[u]=color.BLACK;
        return 1;
    }
}
/*
class TopologicalSort
{
    static int[] topoSort(ArrayList<ArrayList<Integer>> list, int N)
    {
       // add your code here
       int res[]=new int[N];
       boolean visi[]=new boolean[N];
       Stack<Integer> stk=new Stack<Integer>();
       for (int i = 0; i < N; i++) 
            visi[i] = false;
       for(int i=0;i<N;i++)
        if(visi[i]==false)
         evaluate(i,list,visi,stk);
       int i=0;
       while(stk.empty()==false)
           res[i++]=stk.pop();
         
       for(i=0;i<N;i++)
        System.out.println(res[i]);
       return res;
    }
    static void evaluate(int src,ArrayList<ArrayList<Integer>> list,boolean visi[],Stack<Integer>stk)
    {
        visi[src]=true;
        
        for(int i=0;i<list.get(src).size();i++)
          {
             // System.out.println(src+" "+list.get(src).get(i));
              if(!visi[list.get(src).get(i)])
            evaluate(list.get(src).get(i),list,visi,stk);
        }
        stk.push(src);
      //  System.out.println("*"+stk.peek()+"*");
    }
}


*/