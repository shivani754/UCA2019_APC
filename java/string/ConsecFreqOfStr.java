import java.util.*;
public class ConsecFreqOfStr{

     public static void main(String []args){
         Scanner s=new Scanner(System.in);
         String str="aabbccdde";
         StringBuilder sb=new StringBuilder(str);
         int i=0;int count=1;
         for(i=0;i<sb.length()-1;)
         {
             
             //System.out.println("*"+sb.charAt(i)+" "+sb.charAt(i+1)+"*");
             if(sb.charAt(i)==sb.charAt(i+1))
             {
                 count++;
                 sb.deleteCharAt(i+1);
                 //System.out.println(sb);
             }
             else
             {
                 sb.insert(i+1,count);
                 count=1;
                 i+=2;
             }
         }
         sb.insert(sb.length(),count);
         System.out.println(sb.toString());
     }
}