#include<stdio.h>

int main()
{
	int i,j,v,tmp;
	printf("enter a number to check prime number");
	scanf("%d",&v);
	for(i=2;i<=v;i++)
	{
		for(j=2;j<=(i/j);j++)
		if(!(i%j)) break;
		if(j> (i/j)) tmp=i;
	}
	if(tmp==v) printf("number is prime");
	else printf("number is not prime");
	return 0;
}
