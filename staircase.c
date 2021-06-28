#Staircase
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,c;
    int n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(c=n-1;c>i;c--)
        {
            printf(" ");
        }
        for(j=0;j<i+1;j++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
