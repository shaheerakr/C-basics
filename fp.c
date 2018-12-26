#include<stdio.h>

int main()
{
	FILE *fp;
	fp=fopen("star.dat","n");
	char c;
	do 
	{
		putc((c=getchar()),fp);
	}while(c!='\n');
	fclose(fp);
}
