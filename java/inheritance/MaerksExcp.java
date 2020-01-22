import java.util.*;
public class MaerksExcp{

     public static void main(String []args){
         getMarks();
        
     }
     static void getMarks()
     {
         Scanner s=new Scanner(System.in);
         try
         { 
             String name=s.next();
             int i;
             int marks[]=new int[3];
             for(i=0;i<3;)
             {
                 marks[i]=s.nextInt();
                 if(marks[i]<=100)
                 i++;
                 else throw new Exception("Invalid Marks");
             }
             if(i==3) System.out.println("Done");
         }
         catch(Exception e)
         {
             System.out.println(e.getMessage());
             getMarks();
         }
     }
}