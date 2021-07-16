#Apple and Orange
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
#include<assert.h>
#include<stdbool.h>
int main() {
    // Write C code here
    int i,j,count1=0,count2=0;
    int s;
    scanf("%d",&s);
    int t;
    scanf("%d",&t);
    int a;
    scanf("%d",&a);
    int b;
    scanf("%d",&b);
    int m;
    scanf("%d",&m);
    int n;
    scanf("%d",&n);
    int app[m];
    for(int i=0;i<m;i++)
    { 
        scanf("%d",&app[i]);
        if(a+app[i]>=s && a+app[i]<=t)
        {
            count1++;
        }
    }
    int ora[n];
    for(int j=0;j<n;j++)
    {
        scanf("%d",&ora[j]);
        if(b+ora[j]>=s && b+ora[j]<=t)
        {
            count2++;
        }
    }
    printf("%d\n",count1);
    printf("%d",count2);
    return 0;
}
