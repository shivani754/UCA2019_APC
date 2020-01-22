import java.util.Scanner;
class SumOfmulOf3_5
{
	public static void main(String args[])
	{
		Scanner s=new Scanner(System.in);
		System.out.println("Enter number = ");
		int n=s.nextInt();
		int i,sum=0;
		for(i=1;i<n;i++)
		{
			if(i%3==0 || i%5==0)
				sum+=i;
		}
		System.out.println("Sum of multiples of 3 or 5 = "+sum);
	} 
}