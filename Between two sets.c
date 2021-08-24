#Between Two sets
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,m,i,j,t,flag1,flag2,total=0;
    scanf("%d",&n);
    scanf("%d",&m);
    int a[n],b[m];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(j=0;j<m;j++)
    scanf("%d",&b[j]);
    for(t=n;t<=b[0];t++)
    {
        flag1=0;
        flag2=0;
        for(i=0;i<n;i++)
        {
            if(t%a[i]!=0)
            {
                flag1 = 1;
                break;
            }
        }
        if(flag1==0)
        {
            for(j=0;j<m;j++)
            {
                if(b[j]%t!=0)
                {
                    flag2=1;
                    break;
                }
            }
        }
        if(flag1==0 && flag2 ==0)
        total++;
    }
    printf("%d",total);
    return 0;
}
