/*
Say you have an array, A, for which the ith element is the price of a given stock on day i.

If you were only permitted to complete at most one transaction (ie, buy one and sell one share of the stock), design an algorithm to find the maximum profit.

Return the maximum possible profit.
*/

int maxProfit(const int* A, int n1) {
int *res=(int *)malloc(sizeof(int)*3000000);

    int i=1,j=0,max=0,t=0;
    for(i=0;i<n1;i++)
    res[i]=0;
    res[0]=A[0];
    for(i=1;i<n1;i++)
    {
        if(A[i]>res[i-1]&&res[i-1]!=0)
        {
            t=A[i]-res[i-1];
            res[i]=res[i-1];
        }
        else res[i]=A[i];
         if(t>max)
         max=t;

    }
    return max;
 }
