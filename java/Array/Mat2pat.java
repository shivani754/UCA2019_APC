import java.util.Scanner;
class Mat2pat
{
	public static void main(String args[])
	{
		Scanner s=new Scanner(System.in);
		int n;
		System.out.println("enter size of array:");
		n=s.nextInt();
		int i=0,j=0;
		int arr[][]=new int[n][n];
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
          arr[i][j]=s.nextInt();
      i=0;j=0;int k=0;
      while(i<n)
      {
      	for(j=0;j<n;j++)
      		System.out.print(arr[i][j]+" ");
      	if(i!=(n-1))
        for(k=n-1;k>=0;k--)
        	System.out.print(arr[i+1][k]+" ");
        i+=2;
      }

	}
}