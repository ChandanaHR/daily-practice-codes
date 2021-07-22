#Number line jumps
#include <stdio.h>
#include<stdlib.h>
int main()
{ 
    char y[10] = "YES";
    char n[10] = "NO";
    int x1,v1,x2,v2;
    scanf("%d",&x1);
    scanf("%d",&v1);
    scanf("%d",&x2);
    scanf("%d",&v2);
    if(x2>x1){
        if(v2<v1){
            if((x2-x1)%(v1-v2)==0)
            printf("YES");
            else
            printf("NO");
        }
        else
        printf("NO");
    }
    else{
        if(v1>v2){
            if((x1-x2)%(v2-v1)==0)
            printf("YES");
            else
            printf("NO");
        }
        else
        if(x1==x2 && v1==v2)
        printf("YES");
        else
        printf("NO");
    }
    return 0;
    }
