#include<stdio.h>
int main()
{
    int xor=0;
    int i,x;
    int n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    x=arr[0];
    arr[0]=arr[0]&(arr[0]^x);
    for(i=0;i<n;i++)
    {
        printf(" %d \n",arr[i]);
    }
    for(i=0;i<n;i++)
    {
        xor=xor^arr[i];
    }
    printf("%d\n",xor);
}
