import java.util.Scanner;
class PalindromeSubstring
{
	public static void main(String args[])
	{
		String str;
	Scanner s=new Scanner(System.in);
     str=s.nextLine();
     int i=0,j=0,k=0;
     String s1;
     for(i=0;i<str.length();i++)
     {
     	for(j=i;j<str.length();j++)
     	{
     		s1=str.substring(i,j+1);
     		int len=s1.length();
     		if(len==1) continue;
     		for( k=0;k<len/2;k++)
     			if(s1.charAt(k)!=s1.charAt(len-1-k))
     				break;
     			if(k==len/2)
     				System.out.println(s1);
     		
     	}
     }
 }
}