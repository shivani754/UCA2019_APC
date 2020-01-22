import java.util.Scanner;
class Swap
{
   public static void main(String args[])
   {
      int n,t,count=0;
     Scanner s=new Scanner(System.in);
       System.out.println("Enter number:");
      n=s.nextInt();
        t=n;
       while(n!=0)
        {
           count++;
          n/=10;
         }
 /*int arr[]=new int[count];            //first method
      for(int i=count-1;i>=0;i--)
       { 
           arr[i]=t%10;
            t/=10;
        }
   
       t=arr[count-1];
     arr[count-1]=arr[0];
     arr[0]=t;
       for(int i=0;i<count;i++)
    System.out.print(arr[i]+" ");*/
     
    int first=(int)(t/(Math.pow(10,count-1)));            //second method
    int last=t%10;
      int i=1;int new_num=first;
        t/=10;
       while(i<count)
         {
            if(i==count-1)
            new_num+=last*(Math.pow(10,i));
             else
            new_num+=(t%10)*(Math.pow(10,i));
           t/=10;
           i++;
          }
        System.out.println(new_num);
    }
}