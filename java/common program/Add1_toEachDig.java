import java.util.Scanner;
class Add1_toEachDig
{
    public static void main(String args[])
     {
       int n;
       Scanner s=new Scanner(System.in);
        System.out.println("Enter number:");
        n=s.nextInt();
        int new_num=0,base=1;
         while(n!=0)
          {
            new_num+=(n%10 + 1)*base;
             n/=10;
             base*=10;
          }
        System.out.println(new_num);
      }
}