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
         dfs(0,arr,visited);
	}
	public static void dfs(int src,ArrayList<ArrayList<Integer>>list,boolean vis[])
	{
		vis[src]=true;
       System.out.print(src+" ");
       for(int i=0;i<list.get(src).size();i++)
          {
              if(!vis[list.get(src).get(i)])
                dfs(list.get(src).get(i),list,vis);
          }
	}
}