import java.util.*;
class RemoveDuplicate
{
	public static void main(String args[])
	{
		ArrayList<String> list=new ArrayList<String>();
		Scanner s=new Scanner(System.in);
		String st;
		System.out.println("enter values:");
		for(int i=0;i<5;i++)
         {
         	st=s.next();
         	list.add(st);
         }
         int i=0,j=0;
         for(i=0;i<list.size()-1;i++)
         {
         	for(j=i+1;j<list.size();)
         	{
         		if(list.get(i).equals(list.get(j)))
                   	list.remove(j);
         		else j++;
         	}
         }
         System.out.println("After:");
       Iterator<String> itr=list.iterator();
		while(itr.hasNext())
			System.out.println(itr.next());
	}
}