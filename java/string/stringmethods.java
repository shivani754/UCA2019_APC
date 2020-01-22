class stringmethods
{
	public static void main(String args[])
	{
		String str="HelloWorld";
		String str1="helloWorld";
		String str2="HelloWorld";
		String str3=" hi hey ";
		char ch[]=str.toCharArray();
		for(int i=0;i<str.length();i++)
			System.out.println(ch[i]);
		char ch1[]=new char[3];
		str.getChars(1,3,ch1,0);
			System.out.println("getchars:");
		for(int i=0;i<3;i++)
			System.out.println(ch1[i]);
        	System.out.println(str.equals(str1));
        	boolean b=(str==str1);
        		System.out.println(b);
           	System.out.println(str.equalsIgnoreCase(str1));
           	b=str.startsWith("h");
           	boolean c=str1.startsWith("hel");
           		System.out.println(b+" "+c);
           		b=str.endsWith("ld");
           		System.out.println(b);
           	System.out.println(str.compareTo(str1));
           	System.out.println(str.compareTo(str2));
           	System.out.println(str.compareToIgnoreCase(str1));
           	int n=str.indexOf("W");
           	System.out.println(n);
            System.out.println(str.indexOf("ll"));
            System.out.println(str.lastIndexOf("o"));
            System.out.println(str.substring(3));
            System.out.println(str.substring(5,10));
             str.replace('l','L');
             System.out.println(str.replace('l','L'));
             
		System.out.println("String after replacing all small letters = "+str.replaceAll("([a-z])", ""));
             System.out.println(str3.trim());
             String s=String.valueOf(n);
             System.out.println(s);
             String s1[]=str3.split(" ");
             for(int i=0;i<s1.length;i++)
             System.out.println(s1[i]);
            

	}
}