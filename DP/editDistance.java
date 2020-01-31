import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
         int t;
        Scanner s=new Scanner(System.in);
        t=s.nextInt();
        while(t>0)
        {
           // s.nextLine();
            String st1=s.next();
            String st2=s.next();
            int res[][]=new int[st1.length()+1][st2.length()+1];
            int i=0,j=0;
            for(i=0;i<=st1.length();i++)
                res[i][0]=i;
            for(i=0;i<=st2.length();i++)
                res[0][i]=i;
            for(i=1;i<=st1.length();i++)
            {
                for(j=1;j<=st2.length();j++)
                {
                    //System.out.println(st1.charAt(i-1)+" "+st2.charAt(j-1));
                    if(st1.charAt(i-1)==st2.charAt(j-1))
                        res[i][j]=res[i-1][j-1];
                    else
                        res[i][j]=min(res[i][j-1],res[i-1][j-1],res[i-1][j])+1;
                   // System.out.println(res[i][j]);
                }
            }
            System.out.println(res[st1.length()][st2.length()]);
            t--;
        }
    }
     static int min(int a,int b,int c)
    {
        return (a<b)?(a<c?a:c):(b<c?b:c);
    }
}
