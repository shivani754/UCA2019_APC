import java.util.Scanner;
class Perfect
{
   public static void main(String args[])
  {
  int n;
  Scanner s=new Scanner(System.in);
    System.out.println("Enter number.");
    n=s.nextInt();
   int i=1,sum=0;
  while(i<n)
  {  
     if(n%i==0)
      sum+=i;
      i++;
   } 
  if(sum==n)
    System.out.println("It is a perfect number.");
 else
     System.out.println("It is not a perfect number.");
  }
}