import java.util.Scanner;
class TranposeOfMatrix
{
    public static void main(String args[])
    {
         int r,c;
       Scanner s=new Scanner(System.in);
        System.out.println("Enter the rows and columns:");
         r=s.nextInt();
         c=s.nextInt();
        int arr[][]=new int[r][c];
        int arr1[][]=new int[c][r];
      int i,j;
       for(i=0;i<r;i++)
        for(j=0;j<c;j++)
        arr[i][j]=s.nextInt();


//STORING IN ANOTHER ARRAY
      /*for(i=0;i<r;i++)
       for(j=0;j<c;j++)
       arr1[j][i]=arr[i][j];
      for(i=0;i<c;i++)
        {
System.out.print("\n");
       for(j=0;j<r;j++)
       System.out.print(arr1[i][j]+" ");
         
      }*/


//USING SAME ARRAY FOR PRINTING
for(i=0;i<c;i++)
       {
          System.out.print("\n");
          for(j=0;j<r;j++)
          System.out.print(arr[j][i]+" ");
        }

     }
}