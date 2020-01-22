import java.util.Scanner;
class ZeroAt1_last
{
	public static void main(String args[])
	{
		String str;
		Scanner s1=new Scanner(System.in);
		str=s1.nextLine();
	    int i=0,j=0,count=0;
		for(i=0;i<str.length();i++)
			for(j=i;j<str.length();j++)
			{
                String s=str.substring(i,j+1);
                	if(s.charAt(0)=='0'&&s.charAt(s.length()-1)=='0')
                		count++;
                	
			}
			System.out.println("count:"+count);

	}
}