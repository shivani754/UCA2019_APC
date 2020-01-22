import java.util.Scanner;
class FreqOfchars
{

	public static void main(String args[])
	{
		String str;String s1="";
	Scanner s=new Scanner(System.in);
     str=s.nextLine();
     
     int i=0,j=0;
     for(i=0;i<str.length();i++)
     {
     	int count=0;
     	for(j=0;j<str.length();j++)
     	{
     		if(str.charAt(i)==str.charAt(j)&&j<i)
     		break;
     	else if(str.charAt(i)==str.charAt(j))
     		{
     			count++;
     			//str.replace(str.charAt(j),' ');

     		}
         }
         if(j==str.length())
        {
        	s1+=str.charAt(i);
        s1+=count;
        }
     }
       /*  char ch[]=str.toCharArray();
     for(i=0;i<ch.length;i++)
     {
     	int count=1;
     	for(j=i+1;j<ch.length;j++)
     	if(ch[i]==ch[j]&&ch[i]!='0')
     		{
     			count++;
                ch[j]='0';
     		}
       if(ch[i]!='0')
        {
        	s1+=ch[i];
        s1+=count;
        }
     }*/
     System.out.print(s1);
    }
 }