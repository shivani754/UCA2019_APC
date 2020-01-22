import java.util.Scanner;
class LargestEleInMat
{
   public static void main(String args[])
   {
     Scanner s=new Scanner(System.in);  
   int n;
    System.out.println("Enter the number:");
     n=s.nextInt();
     int i,j;
      int mat[][]=new int[n][n];
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
     mat[i][j]=s.nextInt();
int max=mat[0][0];
      for(i=0;i<n;i++)
       for(j=0;j<n;j++)
        if(max<mat[i][j])
        max=mat[i][j];
     System.out.print("Largest element is:"+max);

    }
}