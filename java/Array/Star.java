import java.util.Scanner;
class Star
{
public static void main(String args[])
    {

//FIRST TYPE
   /*  Scanner s=new Scanner(System.in);  
   int n;
    System.out.println("Enter the number:");
     n=s.nextInt();
     int i,j;
    for(i=0;i<n;i++)
     {
         System.out.print("\n");
         for(j=0;j<i+1;j++)
           System.out.print("*");
     }*/


//SECOND TYPE
     /* Scanner s=new Scanner(System.in);  
   int n;
    System.out.println("Enter the number:");
     n=s.nextInt();
     int i,j;
    for(i=1;i<=n;i++)
     {
         System.out.print("\n");
         for(j=0;j<n-i;j++)
           System.out.print(" ");
         for(j=0;j<i;j++)
           System.out.print("*");
    }*/



//THIRD TYPE
       Scanner s=new Scanner(System.in);  
   int n;
    System.out.println("Enter the number:");
     n=s.nextInt();
     int i,j,k;
    for(i=1;i<=n;i++)
    {
      for(j=0;j<n-i;j++)
        System.out.print(" ");
      for(k=1;k<=2*i-1;k++)
        {
           if(i%2!=0)
            System.out.print("*");
           else
            
         }
     }

}
}