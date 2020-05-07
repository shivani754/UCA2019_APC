import java.util.*;
import java.lang.*;
import java.io.*;
class DFS{
	Scanner s=new Scanner(System.in);
	 public static void main(String[] args) {
	 	Scanner s=new Scanner(System.in);
		ArrayList<ArrayList<Integer>>arr=new ArrayList<ArrayList<Integer>>();
		int v=s.nextInt();
		int e=s.nextInt();
         for(int i=0;i<v;i++)
         	arr.add(new ArrayList<Integer>());
         boolean visited[]=new boolean[v];
         for(int i=0;i<e;i++)
         {
         	int u=s.nextInt();
         	int V=s.nextInt();
         	arr.get(u).add(V);
         	arr.get(V).add(u);
         }
         for(int i=0;i<v;i++)
         	visited[i]=false;
         bfs(0,arr,visited);
	}
	public static void bfs(int src,ArrayList<ArrayList<Integer>>list,boolean vis[],int l)
	{
		/*vis[src]=true;
    for(int i=0;i<list.get(src).size();i++)
       {
          for(int j=0;j<list.get(i).size();j++)
            {
              if(!vis[list.get(i).get(j)])
              System.out.print(list.get(i).get(j)+" ");
              vis[list.get(i).get(j)]=true;
            }
          bfs(i,list,vis,list.get(i).size());
       }*/
      vis[src]=true;
      Queue<Integer> q=new LinkedList<Integer>();
      q.add(src);
      while(!q.isEmpty())
      {
          int s=q.poll();
          System.out.print(s+" ");
          for(int i=0;i<list.get(s).size();i++)
          {
             if(!vis[list.get(s).get(i)])
              {
                q.add(list.get(s).get(i));
                vis[list.get(s).get(i)]=true;
              }
          }
      }
     
	}
}