import java.util.*;
public class HelloWorld{

     public static void main(String []args){
       Scanner s=new Scanner(System.in);
       int t=s.nextInt();
       for(int k=0;k<t;k++)
       {
           int n=s.nextInt();
           int arr[]=new int[n];
           int res[]=new int[n];
           for(int i=0;i<n;i++)
           arr[i]=s.nextInt();
           HashMap<Integer,Integer>hm=new HashMap<Integer,Integer>();
           for(int i=0;i<n;i++)
           {
               if(hm.containsKey(arr[i]))
               hm.put(arr[i],hm.get(arr[i])+1);
               else hm.put(arr[i],1);
           }
           Stack<Integer> stk=new Stack<Integer>();
         //int temp=n-1;
           res[n-1]=-1;
           stk.push(n-1);
           for(int i=n-2;i>=0;i--)
           {

               if(hm.get(arr[i])<hm.get(arr[stk.peek()])||stk.empty())
               {
                  res[i]=arr[stk.peek()];
                  stk.push(i);
               }
               else
               {
                   while(!stk.empty()&&hm.get(arr[i])>=hm.get(arr[stk.peek()]))
                   stk.pop();
                   if(stk.empty())
                   res[i]=-1;
                   else res[i]=arr[stk.peek()];
                   stk.push(i);
               }
           }
           for(int i=0;i<n;i++)
           System.out.print(res[i]+" ");
       }
     }
}
