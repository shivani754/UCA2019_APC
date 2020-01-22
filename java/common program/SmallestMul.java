import java.util.Scanner;
class SmallestMul
{
	public static void main(String args[])
	{
		int n=2;
		for(int i=2;i<=20;)
		{
            if(n%i==0)
            	i++;
            else 
            	{
            		n++;
            		i=2;
            	}
		}
		System.out.println("Smallest multiple that is 1 to 20 remainder is 0 :"+n);
	}
}