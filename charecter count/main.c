#include <stdio.h>
#include <conio.h>

int main()
{
    int i=0;
    char a;
    printf("enter a phrase\n");
    do{
        a=getche();
        if(a==' ') i++;
    }while(a!='\r');
    printf("\nthe number of words are %d",i+1);
    return 0;
}
