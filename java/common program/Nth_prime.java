import java.util.Scanner;
class Nth_prime
{
    public static void main(String args[])
     {
         int n;
        Scanner s=new Scanner(System.in);
         System.out.println("Enter number:");
          n=s.nextInt();
        int t=1,i=2,count=0;
        while(count<n)
          {
              t++;
             i=2;
             while(i<t)
                {
                    if(t%i==0)
                     break;
                    else i++;  
                }
              if(i==t)
               count++;
              
          }
         System.out.println("Nth prime number is:"+t);
      }
}