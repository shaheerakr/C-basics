#include<stdio.h>

long long int fib(int);
int main()
{
	int i;
	for(i=0;i<50;i++)
	{
		printf("%d\n",fib(i));
	}
}
long long int fib(int f)
{
	if(f<=1)
		return 1;
	else 
		return fib(f-1)+fib(f-2);
}
