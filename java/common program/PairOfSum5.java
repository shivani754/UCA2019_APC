import java.util.Scanner;
class PairOfSum5
{
   public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        System.out.println("enter the size of array");
        int n=s.nextInt();
       int i,j;
        int arr[]=new int[n];
        for(i=0;i<n;i++)
        arr[i]=s.nextInt();
        for(i=0;i<n;i++)
         for(j=i+1;j<n;j++)
          {
             if(arr[i]+arr[j]==5)
              System.out.print("("+arr[i]+","+arr[j]+") ");
           }
     }
}