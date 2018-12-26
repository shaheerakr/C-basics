#include<stdio.h>

int main()
{
	int i;
	for(i=0;i<=23;i++)
	{
		if(i==0)
		{
			printf("00 is midnight\n");
		}
		else if(i!=0&&i<12) 
		{
			printf("%d is %dAM\n",i,i);
		}
		else if(i==12) 
		{
			printf("%2d is Noon\n",i);
		}
		else if(i<24)
		{
			printf("%d is %dPM\n",i,i);
		}
	}
	return 0;
}
