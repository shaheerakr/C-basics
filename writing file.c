#include<stdio.h>
#include<stdlib.h>
#include<string.h>



int main()
{
	FILE *fp;
	char s[100];
	fp=fopen("poem.dat","wb+");
	if(fp==NULL) 
	{
		printf("canot open file\n");
		exit(1);
	}
	gets(s);
	fputs(s,fp);
/*	while(1)
	{
		ch=fgetc(fp);
		if(ch==EOF) break;
		printf("%c",ch);
	}*/
	fclose(fp);
	return 0;
}
