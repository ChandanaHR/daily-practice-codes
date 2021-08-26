#Breaking the records
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,k,i,j,count=0,count2=0;
    scanf("%d",&n);
    int low[n],high[n];
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    high[0] = arr[0];
    for(j=0;j<n-1;j++)
    {
        if(high[j]>=arr[j+1])
        {
            high[j+1]=high[j];
        }
        else
        {
            high[j+1]=arr[j+1];
        }
    }
    for(j=0;j<n-1;j++)
    {
        if(high[j]!=high[j+1])
        count=count+1;
    }
    low[0] = arr[0];
    for(k=0;k<n-1;k++)
    {
        if(arr[k+1]<=low[k])
        {
            low[k+1]=arr[k+1];
        }
        else
        {
            low[k+1]=low[k];
        }
    }
    for(k=0;k<n-1;k++)
    {
        if(low[k]!=low[k+1])
        count2=count2+1;
    }
    printf("%d %d",count,count2);
}
