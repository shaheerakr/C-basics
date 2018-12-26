#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define max 5

void stringSort(char[][100]);

int main()
{
	char s[max][100];
    int i;
    printf("enter %d names\n",max);
    for(i=0;i<max;i++)
        gets(s[i]);
    stringSort(s);
    printf("sorted alphabeticaly\n");
    for(i=0;i<max;i++)
        puts(s[i]);
    return 0;
}
void stringSort(char ar[][100])
{
    int i,j=0;
    static char swap[100];
    for(i=0;i<max;i++)
    {
        for(j=i+1;j<max;j++)
        {
            if(strcmp(ar[i],ar[j])>0)
            {
                strcpy(swap,ar[i]);
                strcpy(ar[i],ar[j]);
                strcpy(ar[j],swap);
            }
        }
    }
}
