#include <stdio.h>

int main()
{
    int l[3],r[3];
    int i=0,j=0;
    for(i=0;i<3;i++)
    scanf("%d",&l[i]);
    for(i=0;i<3;i++)
    scanf("%d",&r[i]);
    int max=0;
    for(i=0;i<3;i++)
    if(max<r[i])
    max=r[i];
    int arr[max+2];
    for(i=0;i<max+2;i++)
    arr[i]=0;
    for(i=0;i<3;i++)
     {
         arr[l[i]]++;
         arr[r[i]+1]--;
     }
   int prev=0,max1=0,pos=0;
     for(i=0;i<max+1;i++)
     {
         if((arr[i]+prev)>max1)
         {
             max1=arr[i]+prev;
             pos=i;
         }
         prev=max1;
     }
     printf("%d is occurring %d times",pos,max1);
    return 0;
}
