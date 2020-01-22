interface I1
{
	
	int I1area();
} 
interface I2
{
	
	double I2area();
}
class Area implements I1,I2
{
    int a;
    Area(int a)
    {
    	this.a=a;
    }
    public int I1area()
    {
    	return a*a;
    }
    public double I2area()
    {
    	return a*a;
    }
}
public class Interface
{
    
    public static void main(String args[])
    {
        I1 ob;
         ob=new Area(5);
         System.out.println("Area of I1="+ob.I1area());
         I2 ob1;
         ob1=new Area(5);
         System.out.println("Area of I2="+ob1.I2area());
         /*Area ar=new Area(5);
         System.out.println("Area of I1="+ar.I1area());
         System.out.println("Area of I2="+ar.I2area());*/
    }
}
