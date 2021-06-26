#Compare the triplets
#include <stdio.h>

int main() 
{
    int count=0,count1=0;
    int i;
    int n=3;
    int a[3];
    scanf("%d %d %d",&a[0],&a[1],&a[2]);
    int b[3];
    scanf("%d %d %d",&b[0],&b[1],&b[2]);
    for(int i=0;i<3;i++)
    {
        if(a[i]>b[i])
        {
            count++;
        }
        else if(a[i]<b[i])
        {
            count1++;
        }
    }
    printf("%d %d",count ,count1);
    return 0;
}
