class Test1<T,U>
{
	T obj1;U obj2;
   Test1(T obj1,U obj2)
   {
   	this.obj1=obj1;
   	this.obj2=obj2;
   }
   public void getObj()
   {
   	System.out.println(obj1);
   	System.out.println(obj2);
   }
}
public class MultipleType
{
	public static void main(String args[])
	{
		
		Test1<String,Integer> sobj=new Test1<String,Integer>("Hello",15);
		sobj.getObj();
	}
}