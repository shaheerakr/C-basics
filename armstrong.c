#include <stdio.h>
#include <math.h>

main()
{
	int a,d1,d2,d3,tmp;
	printf("enter any nuber");
	scanf("%d",&a);
	d1=a%10;
	d2=(a/10)%10;
	d3=(a/100)%10;
	tmp=pow(d1,3)+pow(d2,3)+pow(d3,3);
	if(tmp==a)
	{
		printf("number is armstrong");
	}
	else
	{
		printf("number is not armstrong");
	}
}
