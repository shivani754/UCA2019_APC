import java.util.Scanner;
class RotateMatBy90
{
   public static void main(String args[])
    {
         int r,c;
       Scanner s=new Scanner(System.in);
        System.out.println("Enter the rows and columns:");
         r=s.nextInt();
         c=s.nextInt();
        int arr[][]=new int[r][c];
        
      int i,j;
       for(i=0;i<r;i++)
        for(j=0;j<c;j++)
        arr[i][j]=s.nextInt();
       for(i=0;i<c;i++)
       {
          System.out.print("\n");
          for(j=r-1;j>=0;j--)
          System.out.print(arr[j][i]+" ");
        }

    }
}