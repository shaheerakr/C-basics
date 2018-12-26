#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
	FILE *fp;
	char s[100];
	fp=fopen("poem.dat","r");
	if(fp==NULL)
	{
		printf("canot open file");
		exit(1);
	}
	fgets(s,99,fp);
	puts(s);
	fclose(fp);
	return 0;
}
