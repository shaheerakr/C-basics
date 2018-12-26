#include<stdio.h>
#include<string.h>
#define max 5

int stringSearch(char [][100],char [100],int);

int main()
{
	static char names[max][100],search[100];
	int i,f=0;
	printf("enter 5 names\n");
	for(i=0;i<max;i++)
		gets(names[i]);
	printf("enter name you want to search\n");
	gets(search);
	f=stringSearch(names,search,max);
/*	if(f!=-1)
	{
		printf("match found at %d",f);
	}
	else if(f==-1)
	{
		printf("no match found");
	}*/
}
int stringSearch(char input[][100],char check[100],int limit)
{
	int i,k;
	for(i=0;i<limit+1;i++)
	{
		if(i==limit)
		{
			k=-1;
			break;
		}
		else if(strcmp(input[i],check)==0)
		{
			k=i;
			break;
		}
	}
	if(k!=-1)
	{
		printf("match found at %d",k);
	}
	if(k==-1)
	{
		printf("no match found");
	}
	return k;
}
