import java.util.*;
import java.io.*;
public class UniqueWord{
    public static void main(String[] args) throws Exception
    {
        // Write your code here
      Scanner sc=new Scanner(System.in);
      String s="file.txt";
      System.out.print(countUniqueWords(s));
    }
  static int countUniqueWords(String s) throws Exception
  {
    FileReader fin= new FileReader(s);
      BufferedReader br=new BufferedReader(fin);
      String st="";int count=0;
      while((s=br.readLine())!=null)
      st=st+s+" ";
      int i=0;
      String str[]=st.split(" ");
      LinkedHashSet<String> ls= new LinkedHashSet<String>(); 
      /*int len=0;
      for(i=0;i<str.length;i++)
      {
         len+=str[i].length()+1;
        int n=st.indexOf(str[i],len);
        if(n==-1)
          count++;
      }*/
      for(i=0;i<str.length;i++)
        ls.add(str[i]);
      count=ls.size();
    return count;
  }
}