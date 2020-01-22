import java.util.Scanner;
class Reverse
{
public static void main(String args[])
{
 Scanner s = new Scanner(System.in);
 int n=781,rev=0;
System.out.println("enter the number");
    n=s.nextInt();//scans number from console
  while(n!=0)
{
  rev=rev*10 + n%10;
   n/=10;
}
System.out.println("reverse of number is "+rev);
}
}