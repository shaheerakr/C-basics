#include<stdio.h>

int main()
{
	int i,n,tm,tm2;
	scanf("%d",&n);
	int grad[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&grad[n]);
	}
	for(i=0;i<n;i++)
	{
		tm=grad[i]/5;
		tm2=tm+1;
		if(grad[i]>38)
		{
			if((tm2*5)-grad[i]<3)
			{
				printf("%d\n",tm2*5);
			}
			else
			{
				printf("%d\n",grad[i]);
			}
		}
		else
		{
			printf("%d\n",grad[i]);
		}
	}
}
