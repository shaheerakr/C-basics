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
	int tmp=in/10;
	if(tmp==0) return 0;
	else sumOfDigits(in%10)+sumOfDigits(tmp%10);
/*	static int d[max];
	int i=0,tmp;
	while(in!=0)
	{
		d[i]=in%10;
		in=in/10;
		i++;
	}
	tmp=i;*/
/*	for(i=0;i<tmp-1;i++)
	{
		if(i==0) return d[i];
		return sumOfDigits(i)+sumOfDigits(i+1)
	}*/
}
