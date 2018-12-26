#include <stdio.h>

int main()
{
	int n[10],i;
	for(i=0;i<=10;i++)
	{
		printf("enter %d number",i);
		scanf("%d",&n[i]);
	}
	for(i=0;i<=10;i++)
	{
		printf("the %d number is %d\n",i,n[i]);
	}
}
