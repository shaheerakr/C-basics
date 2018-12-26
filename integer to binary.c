#include<stdio.h>

long int integerToBinary(int);

int main()
{
	int integer;
	long int binary=0;
	printf("enter a number in integer type\n");
	scanf("%d",&integer);
	binary=integerToBinary(integer);
	printf("binary representation of %d is %ld",integer,binary);
	return 0;
}
long int integerToBinary(int in)
{
	int tmp,i=0;
	long int binary=0;
	static int bin[1024];
	do
	{
		bin[i]=in%2;
		in=in/2;
		i++;
	}while(in!=1);
	tmp=i;
	for(i=tmp;i>=0;i--)
	{
		if(i==tmp) bin[i]=1;
		binary+=bin[i];
		if(i==0) continue;
		else
		binary=binary*10;
	}
	return binary;
}
