abstract class Figure
{
	int l,b;
	Figure(int l,int b)
	{
		this.l=l;
		this.b=b;
	}
	abstract int area();
}
class Rect extends Figure
{
	Rect(int a,int b)
	{
		super(a,b);
	}
	 int area(){return l*b;}
}
class Tri extends Figure
{
	Tri(int l,int b)
	{
		super(l,b);
	}
	 int area(){return ((l*b)/2);}
}
public class Abstractclass
{
	public static void main(String args[])
	{
		Figure f1=new Rect(10,8);
		System.out.println("Rectangle="+f1.area());
		Figure f2=new Tri(2,3);
		System.out.println("Triangle="+f2.area());
	}
}