class BuilderMethods
{
	public static void main(String args[])
	{
		StringBuilder sb=new StringBuilder("");
		sb.append("Hello");
	    int n=sb.capacity();
	    System.out.println(sb+" "+n);
	    sb=new StringBuilder("hi");
	     System.out.println(sb+" "+sb.capacity());
	     sb=new StringBuilder(34);
	     System.out.println(sb.capacity());
	     sb=new StringBuilder(35);
	     System.out.println(sb.capacity());
	     sb=new StringBuilder(5);
	     //sb.ensureCapacity(8);
	     sb.append("hello1");
	      System.out.println(sb.capacity());
	       sb=new StringBuilder("");
	     sb.ensureCapacity(8);
	    // sb.append("hello1");
	      System.out.println(sb.capacity());

    }
}