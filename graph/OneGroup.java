public class OneGroup{
	public static void main(String []arg)
	{

	}
	public static int onegroup(List<String> zombies,ArrayList<Integer> arr)
	{
		int dir[][]={{0,1},{0,-1},{1,0},{-1,0}};
		int i=0,j=0,newi=0,newj=0,count=0;
		for(i=0;i<zombies.get(0).length();i++)
		  {
		  	if(zombies.get(0).charAt(0)=='1')
		    {
		    	count++;
		    	break;
		    }
		  }
		newi=0,newj=1;
		for(int l=0;l<4;)
		{
             newi=newi+dir[l][0];
             newj=newj+dir[l][1];
             if(newi<0||newi>=zombies.get(i).size()||newj<0||newj>=zombies.get(i).size())
             {
             	l++;
             	continue;
             }
             if(zombies.get(newi).charAt(newj)=='1')
             {
             	count++;
             	continue;
             }
             else
             {
                 l++;
                 newi=i;
                 newj=j;
             }
		}
	}
}