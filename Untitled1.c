#include <stdio.h>
int factorial(int);

int main()
{
	int n=0,r=0,num,den1,tm,den2,res;
	printf("enter the value of n");
	scanf("%d",&n);
	printf("enter the value of r");
	scanf("%d",&r);
	num= factorial(n);
	tm=n-r;
	den1= factorial(tm);
	den2= factorial(r);
	res=num/(den1*den2);
	if(r>n) printf("ncr not posible");
	else printf("ncr value is: %d",res);
}
int factorial(int n)
{
	int i,j=1;
	for(i=1;i<=n;i++) j=j*i;
	return j;
}
