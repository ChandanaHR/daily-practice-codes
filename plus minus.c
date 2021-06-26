#Plus Minus
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i;
    float count=0,count1=0,count2=0;
    int n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            count=count+1;
        }
        else if(arr[i]<0)
        {
            count1=count1+1;
        }
        else
        {
            count2=count2+1;
        }
    }
    printf("%.6f \n%.6f \n%.6f",(count/n),(count1/n),(count2/n));
}
