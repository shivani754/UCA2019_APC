#include <bits/stdc++.h>

using namespace std;

// Complete the counterGame function below.
string counterGame(long n) {
   string p1="Louise";
    string p2="Richard";
   // string str;
    int count=0;
    long n2=n;int i1=0,i0=0;
    while(n2!=0)
    {
        if(n&1) i1++;
        n2>>=1;
    }
    n2=n;
    while(n2!=1)
    {
        if(n2&1==0) i0++;
        n2>>=1;
    }
    count=i0+i1;
  /*  while(n>1)
      {
          count++;
        if((n &(n-1))==0)
          n/=2;
        else
        {
            int i=0;
            /*for(int j=0;j<31;j++) //method to fetch used bit//1533726144
                if(n&(1<<j))
                i=j+1;*/
             /*   i=(int)log2(n)+1;
            n-=pow(2,i-1);

        }*/

      //}
       if(count%2==0)
        return p2;
       else
         return p1;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        long n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        string result = counterGame(n);

        cout << result << "\n";
    }

    fout.close();

    return 0;
}

