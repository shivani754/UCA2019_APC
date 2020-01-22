import java.util.Scanner;
import java.util.Arrays;
class InbuiltFunc
{
   public static void main(String args[])
   {
       Scanner s=new Scanner(System.in);  
      int mat[][]={{1,2,3},{4,5 ,6}};
       System.out.println("Array list: "+ Arrays.asList(mat));
       int arr[]={1,2,3,4,6,9};
       int key=4;
       System.out.println(key+" found at index: "+ Arrays.binarySearch(arr,key));  //if 8 is searched writtn after 9 op is -6
        System.out.println(key+" found at index: "+ Arrays.binarySearch(arr,1,4,key));//toindex is excluded
        int arr1[]={1,2,5,4,6,7};
         System.out.println( "compare:"+Arrays.compare(arr,arr1));
             System.out.println( "comparing unsigned:"+Arrays.compareUnsigned(arr,arr1));
             System.out.println("Integer Array: "
                           + Arrays.toString(arr)); 
              System.out.println( "array after copying:"+Arrays.toString(Arrays.copyOf(arr,10)));
              int arr2[][]={ {1,2,3,4,6,9} };
              int arr3[][]={ {1,2,5,4,6,7} };
         System.out.println( "deepequal:"+Arrays.deepEquals(arr2,arr3));//works on 2d arrays and returns true only when all elemnts are equal
         System.out.println( "deephashcode:"+Arrays.deepHashCode(arr2));    //works for 2d ,dnt wrk for 1d 
          System.out.println( "deephashcode:"+Arrays.deepHashCode(arr3)); 
           System.out.println( "hashcode:"+Arrays.hashCode(arr)); //wrks for 1d n 2d
            System.out.println( "equal:"+Arrays.equals(arr,arr1));   //wrks for 1d n 2d both
            Arrays.fill(arr,key); //works on;y for id
             System.out.println( "after fill:"+Arrays.toString(arr));
             Arrays.sort(arr1);  
             System.out.println( "after sort:"+Arrays.toString(arr1));
             int arr4[]={1,4,2,3,4,7,6,9};
              Arrays.sort(arr4,1,4);  
             System.out.println( "after sorting in range:"+Arrays.toString(arr4));
    }
  /*  public static void main(String[] args) 
  { 

    // Get the Array 
    int intArr[] = { 10,15,22,20,8,35 }; 

    //Arrays.sort(intArr); 

    int intKey = 20; int key=8;

    System.out.println(intKey 
            + " found at index = "
            + Arrays 
                .binarySearch(intArr, intKey)); //output=-3
    System.out.println(intKey 
            + " found at index = "
            + Arrays 
                .binarySearch(intArr, key)); //output=-1
  } */
}