public class Solution {
    public ArrayList<Integer> dNums(ArrayList<Integer> A, int B) {
        ArrayList<Integer> res=new ArrayList<Integer>();
        HashMap<Integer,Integer> hm=new HashMap<Integer,Integer>();
        int i=0,count=0;
        for(i=0;i<A.size();i++)
        {
             if(count<B)
               count++;
             else
              {
                res.add(hm.size());
                if(hm.containsValue(i-B))
                 hm.remove(A.get(i-B));
              }
            hm.put(A.get(i),i);
        }
        res.add(hm.size());
        return res;
    }

}

/**********************************SECOND METHOD*******************************************/
public class Solution {
    public ArrayList<Integer> dNums(ArrayList<Integer> A, int B) {
        ArrayList<Integer> res=new ArrayList<Integer>();
        HashMap<Integer,Integer> hm=new HashMap<Integer,Integer>();
        int i=0,count=0,j=0;
        for(i=0;i<A.size();i++)
        {
            if(count<B)
             {
                 if(hm.containsKey(A.get(i)))
                  hm.put(A.get(i),hm.get(A.get(i))+1);
                else
                 hm.put(A.get(i),1);
                 count++;
             }
            else
            {
                res.add(hm.size());
                if(hm.get(A.get(j))-1==0)
                 hm.remove(A.get(j));
                else hm.put(A.get(j),hm.get(A.get(j))-1);
                j++;
                count--;
                i--;
            }
        }
        res.add(hm.size());
        return res;
    }

}

