import java.util.Scanner;
class RotateString
{
	 public static void main(String[] args) 
	{
		Scanner s=new Scanner(System.in);
		System.out.println("enter the string:");
		String str=s.nextLine();
		System.out.println("enter the number by which you want to rotate:");
		int n=s.nextInt();
		char ch[]=str.toCharArray();
		char ch1[]=new char[str.length()];
		int i=0,j=0;
		for(i=n;i<ch.length;i++)
		{
            ch1[j]=ch[i];
            j++;
		}
		for(i=0;i<n;i++)
		{
            ch1[j]=ch[i];
            j++;
		}
		String s1=new String(ch1);
		System.out.println("string after rotation:");
		System.out.println(s1);
	}
	
}