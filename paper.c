#include<stdio.h>
#include<string.h>

int cmp(char [100],char [100]);
int len(char [100]);

int main()
{
	char string[100],str2[100];
	gets(string);
	gets(str2);
	int res=cmp(str2,string);
	//int res=strcmp(str2,string);
	if(res>0)
	{
		printf("%s is greater then %s",string,str2);
	}
	else if(res<0)
	{
		printf("%s is less then %s",string,str2);
	}
	else
	{
		printf("%s and %s are equal",string,str2);
	}
}
int len(char in[100])
{
	int i=0;
	while(in[i]!='\0')
	{
		i++;
	}
	return i;
}
int cmp(char str1[100],char str2 [100])
{
	int i,j;
	int length;
	if(len(str1)>len(str2)) length=len(str1);
	else length=len(str1);
	for(i=0;i<length;i++)
	{
		if(str1[i]>str2[i])	return 1;
		else if(str1[i]<str2[i]) return -1;
		else continue;
	}
	return 0;
}

