#SubArray Division
#include<stdio.h>
 #include<stdlib.h>
 int main()
 {
     int i,j,k;
     int n;
     scanf("%d",&n);
     int arr[n];
     for(i=0;i<n;i++)
     {
         scanf("%d",&arr[i]);
     }
     int d;
     scanf("%d",&d);
     int m;
     scanf("%d",&m);
     int count=0;
     for(j=0;j<=n-m;j++)
     {
         int sum=0;
         for(k=j;k<j+m;k++)
         {
             sum+=arr[k];
         }
         if(sum==d)
         count++;
     }
     printf("%d", count);
 }
