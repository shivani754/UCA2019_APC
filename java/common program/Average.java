import java.util.Scanner;
class Average
{
   public static void main(String []args)
   {
     int details[][]=new int[5][5];
     float avg[]=new float[5];
     Scanner s=new Scanner(System.in);
     int i,j,sum=0;
 System.out.println("enter marks:");
  for(i=0;i<5;i++)
   {
      sum=0;
     for(j=0;j<5;j++)
    {
       details[i][j]=s.nextInt();
       sum+=details[i][j];
    }
     avg[i]=sum/5;
   }
    /*for(i=0;i<5;i++)
    System.out.println(avg[i]+" ");*/
  for(float f:avg)  //using for-each loop
System.out.println(f);
  }
}