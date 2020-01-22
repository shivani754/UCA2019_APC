import java.util.Scanner;
class SortMat
{
   public static void main(String args[])
   {
       Scanner s=new Scanner(System.in);  
   int r,c;
    System.out.println("Enter the number:");
     r=s.nextInt();
      c=s.nextInt();
     int i,j,min;
int k,l;
      int mat[][]=new int[r][c];
    for(i=0;i<r;i++)
      for(j=0;j<c;j++)
        {
         mat[i][j]=s.nextInt();
       if(j==0)                 //METHOD1 SORTED DURING SCANNING
          mat[i][j]=mat[i][j];
       else 
         for(l=0;l<j;l++)
         for(k=0;k<j;k++)
         if(mat[i][k]>mat[i][k+1])
           {
                 min=mat[i][k];
                  mat[i][k]=mat[i][k+1];
                  mat[i][k+1]=min;
            }
         }
     
    //SECOND METHOD APPLIED AFTER SCANNING
   /* 
      for(i=0;i<r;i++)
        for(l=0;l<r;l++)
          for(k=0;k<c-1;k++)
           if(mat[l][k]>mat[l][k+1])
            {
                 min=mat[l][k];
                  mat[l][k]=mat[l][k+1];
                  mat[l][k+1]=min;
            }
     */
      for(i=0;i<r;i++)
      {    System.out.print("\n"); 
       for(j=0;j<c;j++)
      System.out.print(mat[i][j]+" ");
      }
   }
}