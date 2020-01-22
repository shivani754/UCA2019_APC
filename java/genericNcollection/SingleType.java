class Test<T>
{
	T obj;
   Test(T obj)
   {
   	this.obj=obj;
   }
   public T getObj()
   {
   	return this.obj;
   }
}
public class SingleType
{
	public static void main(String args[])
	{
		Test<Integer> iobj=new Test<Integer>(15);
		System.out.println(iobj.getObj());
		Test<String> sobj=new Test<String>("Hello");
		System.out.println(sobj.getObj());
	}
}