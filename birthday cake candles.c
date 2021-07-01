#Birthday cake candles
#include<stdio.h>
#include<stdlib.h>
int main()
{
    long long int count=0,i,greatest;
    long long int n;
    scanf("%lld",&n);
    long long int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
    }
    greatest=arr[0];
    for(i=1;i<n;i++)
    {
        if(greatest<=arr[i])
        {
           greatest=arr[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==greatest)
        {
            count=count+1;
        }
    }
    printf("%lld",count);
}
