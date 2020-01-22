import java.util.Scanner;
class LarPrimeFac
{
	public static void main(String args[])
	{
		Scanner s=new Scanner(System.in);
		System.out.print("Enter number:");
		long n=s.nextLong();
		long j=2,prime=0;
		while(n!=1)
		{
			
		if(n%j==0)
			 {
				prime=j;
				 n/=j;
			 }
		else
			j++;
		}
       System.out.println("Largest prime factor is:"+prime);
	}
}