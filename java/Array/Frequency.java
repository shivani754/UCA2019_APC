import java.util.*;
public class Frequency {
static void countFreq(int a[],int n)
{
    int i=0,j=0,count=0;
    for(i=0;i<n;i++)
    {
        count=1;
        for(j=i+1;j<n;j++)
        if(a[i]==a[j] &&a[i]!=0)
            {
                count++;
                a[j]=0;
            }
            if(a[i]!=0)
        System.out.println(a[i]+" occurs "+count+" times");
        
    }
}
public    static void main(java.lang.String a[])
	{
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int arr[]=new int[n];
		for(int i=0;i<n;i++)
		{
			arr[i]=sc.nextInt();			
		}
		countFreq(arr,n);
	}
}