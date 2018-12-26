#include<stdio.h>
#include<string.h>

char* rev(char [100]);

int main()
{
	int i,j=0;
	static char strin[100],strout[100];
	gets(strin);
	strcpy(strout,rev(strin));
	puts(strout);
}
char* rev(char in[100])
{
	static char out[100];
	int i,j=0;
	for(i=strlen(in)-1;i>-1;i--)
	{
		out[j]=in[i];
		j++;
	}
	return out;
}
