import java.util.*;
import java.io.*;
class CountUnique{
    public static void main(String[] args)
    {
        String s;
      Scanner ob=new Scanner(System.in);
      //s=ob.next();
      s="file.txt";
      System.out.println(countUniqueWords(s));
    }
 static int countUniqueWords(String ss)
  {
     ArrayList <String>l=new ArrayList<String>();
    ArrayList <String>l1=new ArrayList<String>();
   try
  {
     int b;
    char c;
      FileInputStream fin=new FileInputStream(ss);
       String s="";
     /*while((b=fin.read())!=-1)
        {
          System.out.print((char)b);
        }
     fin.close();*/
      while((b=fin.read())!=-1)
      {
       //3 System.out.println("++"+b+"++");
      	if(b==10) b=fin.read();
      	else
        {c=(char)b;
        s=s+c;
        b=fin.read();}
       // System.out.println("--"+(char)b+"--");
        while((b!=32)&&(b!=13)&&(b!=-1))
        {
          //System.out.println("**"+(char)b+"**");
          c=(char)b;
          s=s+c;
          b=fin.read();
          
        }
      // System.out.println(s);
        l.add(s);
        s="";
        //b=fin.read();
      }
     int i,j;
     for(i=0;i<l.size();i++)
     {
       if(((String)l.get(i)).equals(" coding"))
         System.out.println("San");
       if(l1.contains(l.get(i))==true)
          continue;
       if(l1.contains(l.get(i))==false)
       {
          l1.add(l.get(i));
       }
     }
  }
   catch(Exception e){}  
    return l1.size();
  }
}