
class Solution {
    public List<Integer> grayCode(int n) {
        List<Integer> l=new ArrayList<Integer>();
        ArrayList<Integer> arr=new ArrayList<Integer>();
        int num=1,i=0,j=0;
        l.add(0);
       // l.add(1);
        while(num<Math.pow(2,n))
        {
            int t=num,base=0;
            i=0;
            while(t!=0)
            {
                arr.add(t&1);
                t>>=1;
                i++;
            }
            for(j=0;j<i-1;j++)
            {
                t+=(arr.get(j)^arr.get(j+1))*Math.pow(2,base);
                base+=1;
            }
            t+=arr.get(j)*Math.pow(2,base);
            arr.clear();
            l.add(t);
            num++;
        }
       return l;
    }
}
