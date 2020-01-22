import java.util.Scanner;
class Rotate
{
   public static void main(String args[])
    {
       int n;
       Scanner s=new Scanner(System.in);
       System.out.println("enter the size of array:");
       n=s.nextInt();
        int arr[]=new int[n];
        int i,j=1;
       for(i=0;i<n;i++)
       arr[i]=s.nextInt();
       int b[]=new int[n];
       for(i=0;i<n-1;i++)
        {
             b[j]=arr[i];
                j++;
         }
        b[0]=arr[i];
      for(i=0;i<n;i++)
      System.out.print(b[i]+" ");
     }
}