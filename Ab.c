#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<string.h>

int main()
{

	char s[]="church gate: no church gate";
    char t[25];
    char *ss,*tt;
    ss=s;
    tt=NULL;
    while(*ss!='\0')
    {
	    *ss=*tt;
		*ss++;
		*tt++;
	}
	printf("%s\n",t);
    return 0;
}
