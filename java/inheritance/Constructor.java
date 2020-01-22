class A
{
	A()
	{
		System.out.println("Constructor,class A");
	}
	A(String str)
	{
		//super(str);
		System.out.println("class A para"+str);
	}
	void display()
	{
		System.out.println("A");
	}
}
class B extends A
{
	B()
	{
		System.out.println("Constructor,class B");
	}
	B(String str)
	{
		//super(str);
		System.out.println("class B para "+str);
	}
	void display()
	{
		System.out.println("B");
	}
}
class C extends B
{
	C()
	{
		System.out.println("Constructor,class C");
	}
	C(String str)
	{
		System.out.println("class C para "+str);
	}
	void display()
	{
		System.out.println("C");
	}
}
public class Constructor
{
	public static void main(String args[])
	{
       B b=new B();
         B b1=new B("Java");
		C c=new C();
	     C c1=new C("Java");
	    /* A a =new A();
	     A b=new B();
	     A c=new C();
	     a.display();
	     b.display();
	     c.display();*/
	}
}
