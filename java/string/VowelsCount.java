class VowelsCount
{
	public static void main(String args[])
	{
		String str="abc";
		int i=0,j=0,count=0,k=0;
		for(i=0;i<str.length();i++)
			for(j=i;j<str.length();j++)
			{
                String s=str.substring(i,j+1);
                for(k=0;k<s.length();k++)
                	if(s.charAt(k)=='a'||s.charAt(k)=='e'||s.charAt(k)=='i'||s.charAt(k)=='o'||s.charAt(k)=='u')
                	{
                		count++;
                	}
			}
			System.out.println("count:"+count);

	}
}