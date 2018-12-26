#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y,i,d1=0,d2=0,dif=0;
    char *day;
    printf("enter year ");
    scanf("%d",&y);
    for(i=0;i<y;i++)
    {
        if(i%4==0)
        {
            d1=d1+364;
        }
        else
        {
            d1=d1+365;
        }
        d2=d2+364;
    }
    dif=d1-d2;
    while(dif>=7)
    {
        dif-=7;
    }
    if(dif==0) day="Monday";
    if(dif==1) day="Tuesday";
    if(dif==2) day="Wednesday";
    if(dif==3) day="Thursday";
    if(dif==4) day="Friday";
    if(dif==5) day="Saturday";
    if(dif==6) day="Sunday";
    printf("on 1st January %d day is %s",y,day);
    return 0;
}
