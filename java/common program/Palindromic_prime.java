import java.util.Scanner;
class Palindromic_prime
{
public static void main(String args[])
   {
    int n,i=2,rev=0;
    Scanner s=new Scanner(System.in);
    System.out.println("Enter the no.");
    n=s.nextInt();
    int t=n;
    while(n!=0)
   {
      rev=rev*10+n%10;
      n/=10;
    } 
      if(rev==t)
       {
           while(i<rev)
            { 
                  if(rev%i==0)
                   break;
                  else i++;
               }
           if(i==rev)
           System.out.println("Number is palindromic prime");
           else
           System.out.println("Number is  palindromic but not prime");
        }
      else
     System.out.println("Number is not palindrome");
    }
}