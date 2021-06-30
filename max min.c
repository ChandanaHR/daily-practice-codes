#Min Max sum
#include<stdio.h>
#include<stdlib.h>
int main()
{
    long long int i,j,temp,a=0,minimum=0,maximum=0,minimumsum=0,maximumsum=0;
    long long int n=5;
    long long int arr[5];
    for(i=0;i<5;i++)
    {
      scanf("%lld",&arr[i]);  
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    minimum=arr[0];
    maximum=arr[4];
    for(i=0;i<5;i++)
    {
        if(a==0&&arr[i]!=arr[i+1])
        {
            if(arr[i]!=maximum)
            {
                minimumsum=minimumsum+arr[i];
            }
            if(arr[i]!=minimum)
            {
                maximumsum=maximumsum+arr[i];
            }
        }
        if(arr[i]==arr[i+1])
        {
            minimumsum=minimumsum+arr[i];
            maximumsum=maximumsum+arr[i];
            a=1;
        }
    }
    printf("%lld %lld",minimumsum,maximumsum);
}
/* for n number of elements just replace 5 by n*/
