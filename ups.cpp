#include <stdio.h>
main()
{
	int t,o,tmp1,tmp2;
	long int in;
	printf("enter amoumnt");
	scanf("%d",&in);
	printf("how many years");
	scanf("%d",&t);
	t=t*12;
	for(int i=0;i<=t;i++)
	{
		in=2000*i*in;
		printf("%d",in);
	}
}
