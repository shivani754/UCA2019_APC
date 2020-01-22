interface Int1
{
	int x=7;  //we need to initialise the varibles becoz they are bydefault statc,public,final
	int area1();
}
interface Int2 extends Int1
{
	double area2();
}
class Ar implements Int2
{
	int r;
	Ar(int r){this.r=r;}
     public int area1(){return r*r;}
    public double area2(){return x*x;}
}
public class Interface1
{
	public static void main(String args[])
	{
        Ar r=new Ar(6);
        System.out.println("Area of I2="+r.area2());
        System.out.println("Area of I1="+r.area1());
	}
}