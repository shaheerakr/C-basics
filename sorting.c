#include<stdio.h>

int main()
{
	int ar[10],i,j;
	printf("enter 10 numbers");
	for(i=0;i<5;i++)
	{
		scanf("%d",&ar[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=1;j<5;j++)
		{
			if(ar[i]>ar[j-1])
			{
				printf("%d\n",ar[i]);
			}
		}
	}
}
