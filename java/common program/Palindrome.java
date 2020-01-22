import java.util.Scanner;
class Palindrome
{
   public static void main(String args[])
   {
      int n,rev=0;
    /*Scanner s=new Scanner(System.in);
    System.out.println("Enter the no.");
    n=s.nextInt();
    int t=n;
    while(n!=0)
   {
      rev=rev*10+n%10;
      n/=10;
    } 
    if(rev==t)
      System.out.println("Number is palindrome");
else
    System.out.println("Number is not palindrome");*/

   //LARGEST PALINDROME PRODUCT
     Scanner s=new Scanner(System.in);
    System.out.print("Enter digits:");
    int N=s.nextInt();
    int i=0,j=0,LarPal=0;
    i=(int)Math.pow(10,N-1);
    int till=(int)Math.pow(10,N);
    for(i=i;i<=till;i++)
      for(j=i+1;j<=till;j++)
      {
        n=i*j;
        rev=0;
        int t=n;
          while(t!=0)
          {
            rev=rev*10+t%10;
             t/=10;
          } 
            if(rev==n)
              if(rev>LarPal)
                LarPal=rev;

      }
      System.out.println("Largest palindrome of product of "+N+" dig.:"+LarPal);

   }
}