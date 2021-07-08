#Sams Grading principles
#include<stdio.h>
#include<stdlib.h>
int main()
{   
   int n;
    scanf("%d",&n);
    int sum;
    int i,c;
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=arr[i];
        while(sum%5!=0)
        {
            sum=sum+1;
        }
        if(sum>=40)
        {
            c=sum-arr[i];
            if(c<3)
            {
                printf("%d\n",sum);
            }
            else
            {
                printf("%d\n",arr[i]);
            }
        }
        else
        {
            printf("%d\n",arr[i]);
        }
    }

    return 0; 
}
