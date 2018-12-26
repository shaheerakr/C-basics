#include<stdio.h>
#define max 10

int sumOfDigits(int);

int main()
{
	int tm,sum;
	scanf("%d",&tm); //max 10
	sum=sumOfDigits(tm);
	printf("%d",sum);
}
int sumOfDigits(int in)
{
	float tmp=(float)in;
	static int d[max];
	int i=0,sum=0;
	while(in!=0)
	{
		d[i]=in%10;
		in=in/10;
		sum+=d[i];
		i++;
	}
	return sum;
}
