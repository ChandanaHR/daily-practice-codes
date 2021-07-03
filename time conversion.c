#Time Conversion
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int hour,minute,second;
    char ap[3];
    scanf("%d:%d:%d %s",&hour,&minute,&second,&ap);
    if(hour<=12 && minute<=59 && second<=59)
    {
        if((strcmp(ap,"PM")==0)  && (hour!=0) && (hour!=12))
        {
            hour=hour+12;
        }
        if((strcmp(ap,"AM")==0)  && (hour==12))
        {
            hour=0;
        }
    }
    printf("%02d:%02d:%02d",hour,minute,second);
    return 0;
}
