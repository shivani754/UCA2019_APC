class TestThrowEx
{
    void validate(int age)
    {
        try
        {
            if(age<18)
        throw new ArithmeticException("Invalid");
        else System.out.println("You are eligible");
        }
        catch(ArithmeticException e)
        {
            System.out.println(e.getMessage());
            throw e;
        }
    }
}
public class HelloWorld{

     public static void main(String []args){
         TestThrow t=new TestThrow();
         try
         {
             t.validate(15);
         }
     catch(Exception e)
     {
         System.out.println("main");
     }
     }
}