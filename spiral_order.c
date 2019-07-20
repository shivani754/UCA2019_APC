#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the matrix:");
    scanf("%d",&n);
    int mat[n][n];
    int i,j;
        int top=0,left=0,bot=n-1,right=n-1,cnt=1;
        while(top<=bot&&left<=right)
    {
        for(i=left;i<=right;i++)
        mat[top][i]=cnt++;
        top++;
        for(i=top;i<=bot;i++)
        mat[i][right]=cnt++;
        right--;
        for(i=right;i>=left;i--)
        mat[bot][i]=cnt++;
        bot--;
        for(i=bot;i>=top;i--)
        mat[i][left]=cnt++;
        left++;
    }
    for(i=0;i<n;i++)
     {
         printf("\n");
         for(j=0;j<n;j++)
            printf("%d ",mat[i][j]);
     }

}
