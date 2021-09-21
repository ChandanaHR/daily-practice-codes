#Divisible Sum Pairs
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,z,count=0;;
    int n;
    scanf("%d",&n);
    int k;
    scanf("%d",&k);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=0;j<n;j++)
    {
        for(z=j+1;z<n;z++)
        {
            if(((arr[j]+arr[z])%k)==0)
            {
                count = count+1;
            }
        }
    }
    printf("%d",count);
}
