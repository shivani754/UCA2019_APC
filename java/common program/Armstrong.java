import java.util.Scanner;
class Armstrong
{
    public static void main(String args[])
     {
          int n,num=0,digs=0;
         Scanner s=new Scanner(System.in);
         System.out.println("enter the number:");
           n=s.nextInt();
         int t=n;
         while(n!=0)
          {
           digs++;
             n/=10;
          }
            n=t;
          while(n!=0)
           {  
                num+=Math.pow(n%10,digs);
                n/=10;
           }
       if(t==num)
        System.out.println("Number is Armstorng.");
        else
         System.out.println("Number is not Armstrong.");
     }
}