import java.util.*;
class LinkedListDemo
{
	public static void main(String args[])
	{
		LinkedList <String> al=new LinkedList<String>();
		al.add("A");
		al.add("B");
		al.add("C");
		al.add("D");
		Iterator<String> itr=al.iterator();
		while(itr.hasNext())
			System.out.println(itr.next());
		listIterator<String> itr=al.listIterator(al.size());
         while(itr.hasPrevious())
			System.out.println(itr.previous());		

	}
}