abstract class Interest
{
	int inter;
	Interest(int inter)
	{this.inter=inter;}
	abstract int display();
}
class B1 extends Interest
{
	B1(int in)
	{
		super(in);
	}
	int display()
	{
		return inter;
	}
}
class B2 extends Interest
{
	B2(int in)
	{
		super(in);
	}
	int display()
	{
		return inter;
	}
}
public class Bank
{
    public static void main(String args[])
    {
         Interest i=new B1(2);
         System.out.println("B1 interest ="+i.display());
         Interest i2=new B2(3);
         System.out.println("B2 interest ="+i2.display());
    }
}