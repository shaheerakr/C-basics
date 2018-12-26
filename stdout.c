#include<stdio.h>
#include<stdlib.h>

int main()
{
	char str[101];
	fputs("enter a phrase",stdout);
	fgets(str,100,stdin);
	fprintf(stdout,"%s",str);
	return 0;
}
