#A very big sum
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{
    long long int n,i,a[10],sum=0;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    } 
    printf("%lld",sum);
    return 0;
}
