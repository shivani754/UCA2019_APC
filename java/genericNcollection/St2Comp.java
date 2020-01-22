import java.util.*;
public class St2Comp
{
   public static void main(String[] args)
   {
      Scanner in = new Scanner(System.in);
      int testCases = Integer.parseInt(in.nextLine());
      
      List<Student> studentList = new ArrayList<Student>();
      while(testCases>0)
      {
         int id = in.nextInt();
         String fname = in.next();
         double cgpa = in.nextDouble();
         
         Student st = new Student(id, fname, cgpa);
         studentList.add(st);
         
         testCases--;
      }
      
      Collections.sort(studentList, new AComparator()); 

for(Student st: studentList)
   {
    System.out.println(st.getFname()+"\t"+st.getId() +"\t"+st.getCgpa());
   }
   }
}
// Write your code here
class Student
{
   private int id;
   private String fname;
   private double cgpa;
public int i;
public String name;
public double cg;
Student(int id,String fname,double cgpa)
{
  this.id=id;
  this.fname=fname;
  this.cgpa=cgpa;
  i=id;name=fname;cg=cgpa;
}
String getFname()
{
  return fname;
}
int getId(){return id;}
double getCgpa(){return cgpa;}
}
class AComparator implements Comparator<Student>
{
  public int compare(Student s1,Student s2)
   {
      if(s1.cg>s2.cg)return -1;
      else if(s1.cg<s2.cg)return 1;
      else 
      {
         if( s1.name.compareTo(s2.name)==0)
            {
               idComp(s1,s2);
            }
            return s1.name.compareTo(s2.name);
      }
     //return s1.name.compareTo(s2.name);
     //return 0;
   }
   void idComp(Student s,Student s3)
   {
      if(s.i>s3.i)
      {
         int id=s.i;
         s.i=s3.i;
         s3.i=id;
      }
   }
}
