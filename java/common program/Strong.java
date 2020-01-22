import java.util.Scanner;
class Strong
{ 
   public static void main(String args[])
   {
      int n,st=0;
      Scanner s=new Scanner(System.in);
        System.out.println("Enter the number:");
        n=s.nextInt();
       int num=n;
       while(num!=0)
        {
            int t,fac=1;
            t=num%10;
             num/=10;
           for(int i=1;i<=t;i++)
            fac*=i;
            st+=fac;
         }
       if(st==n)
       System.out.println("It is a strong number.");
       else
         System.out.println("It is not a strong number.");
    }
}
