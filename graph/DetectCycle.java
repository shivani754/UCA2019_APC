class DetectCycle
{
    static boolean isCyclic(ArrayList<ArrayList<Integer>> list, int V)
    {
        // add your code here
        
        boolean vis[]=new boolean[V];
        boolean recSt[]=new boolean[V];
        for(int i=0;i<V;i++)
         {
             vis[i]=false;
             recSt[i]=false;
         }
        for(int i=0;i<V;i++)
         if(cyclic(i,list,vis,recSt))
          return true;
        
        return false;
    }
    static boolean cyclic(int i,ArrayList<ArrayList<Integer>>adj,boolean vis[],boolean recSt[])
    { 
        if (recSt[i]) 
            return true; 
        if (vis[i]) 
            return false;       
        vis[i] = true; 
        recSt[i] = true;
        for (Integer c: adj.get(i)) 
            {
                if (cyclic(c, adj,vis, recSt)) 
                return true; 
            }          
        recSt[i] = false; 
        return false; 
    }

}