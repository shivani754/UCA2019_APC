class EvenSubstring
{
	public static void main(String args[])
	{
		String str="123456";
	int i=0,j=0,k=0,count=0;
	String s1[]=new String[9];
	for(i=0;i<str.length();i++)
		for(j=i;j<str.length();j++)
			{
				String s=str.substring(i,j+1);
				if((s.length())%2==0)
					{
						count++;
						s1[k]=s;k++;
				//System.out.print(s+" ");
			      }

			}
			System.out.println("Count:"+count);
			for(i=0;i<k;i++)
				System.out.print(s1[i]+" ");
			
		}
}