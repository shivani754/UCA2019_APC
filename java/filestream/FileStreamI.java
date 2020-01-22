import java.io.*;
class FileStreamI
{
	public static void main(String args[])
	{
		try
		{
			//FileInputStream fis=new FileInputStream("file1.txt");
			FileReader fis=new FileReader("file1.txt");
			BufferedReader br=new BufferedReader(fis);
		//int i=fis.read();
		//System.out.println((char)i);
			String s=br.readLine();
		System.out.println(s);
		String str[]=s.split(", ");
		for(int i=0;i<str.length;i++)
		{
			System.out.println(Integer.parseInt(str[i]));
		}
		fis.close();
	   }
	   catch(Exception e)
	   {
	   	System.out.println(e);
	   }

	}
}