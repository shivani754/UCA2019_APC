import java.util.*;
import java.io.*;
// Other imports go here
// Do NOT change the class name
class PrintDuplicate{
    public static void main(String[] args)
    {
        // Write your code here
      Scanner sc=new Scanner(System.in);
      String s="file.txt";
      printDuplicateWords(s);
    }
  static void printDuplicateWords(String in)
  {
    int count=0;
    try
    {
      FileReader fr=new FileReader(in);
      BufferedReader br=new BufferedReader(fr);
      String st;
      while((st=br.readLine())!=null)
      {
       // int len=0,n=0;
        String str[]=st.trim().split(" ");
       // len=str[0].length()+1;
        ArrayList<String> al=new ArrayList<String>();
        for(int i=0;i<str.length;i++)
          {
            //System.out.println(str[i]);
            //if(str[i]!=" ")
            al.add(str[i]);
          }
         // System.out.println(al);
        for(int i=0;i<str.length;)
        {
          if(al.contains(str[i]))
          { //System.out.println("--"+str[i]+"--");
            al.remove(new String(str[i]));
            count++;
          }
          else 
          {
            if(count>1&&str[i]!=null)
              System.out.print(str[i]+"*"+(count)+" ");
            count=0;
            i++;

          }
        }
        System.out.println();

        
      }/*int b;
       while((b=fr.read())!=-1)
        System.out.println(b); */
      fr.close();
    }
    catch(Exception e){}
  }
}