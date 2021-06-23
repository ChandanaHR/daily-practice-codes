#Diagonal difference
#include<stdio.h>
#include<stdlib.h>
int main()
{ 
    int c,d;
    int sum=0,sum1=0;
    int i,j;
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                sum=sum+a[i][j];
            }
            if((i+j)==n-1)
            {
                sum1=sum1+a[i][j];
            }
        }
    }
    c=sum-sum1;
    d = abs(c);
    printf("%d",d);
}
