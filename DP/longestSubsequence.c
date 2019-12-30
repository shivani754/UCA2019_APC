
int longestSubsequenceLength(const int* A, int n1) {
    if(n1==0)return 0;
    int i=0,j=0;
    int *lis=(int *)calloc(sizeof(int),n1);
    int *lds=(int *)calloc(sizeof(int),n1);
    for(i=0;i<n1;i++)
    {
        lis[i]=1;
        lds[i]=1;
    }
    for(i=1;i<n1;i++)
    {
        for(j=0;j<i;j++)
        if(A[i]>A[j]&&lis[i]<lis[j]+1)
         lis[i]=lis[j]+1;
    }
    for(i=n1-2;i>=0;i--)
    {
        for(j=n1-1;j>i;j--)
        if(A[i]>A[j]&&lds[i]<lds[j]+1)
         lds[i]=lds[j]+1;
    }
    int max=lis[0]+lds[0]-1;
    for(i=1;i<n1;i++)
    {
        if(lds[i]+lis[i]-1>max)
        max=lds[i]+lis[i]-1;
    }
    return max;
}
