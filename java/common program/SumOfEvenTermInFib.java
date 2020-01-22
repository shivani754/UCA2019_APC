import java.util.Scanner;
class SumOfEvenTermInFib
{
	public static void main(String args[])
	{
		int a=1,b=2,c=0,sum=2;
		while(c<4000000)
		{
			c=a+b;
			if(c%2==0)
				sum+=c;
			a=b;
			b=c;
		}
      System.out.println("Sum of even valued terms in FIBO : "+sum);
    }
}