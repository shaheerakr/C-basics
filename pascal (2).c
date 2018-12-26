#include <stdio.h>
int ncr(int,int);
int factorial(int);

int main()
{
	int i,j,n,res=0;
	printf("enter number of rows");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		for(j=n;j>=i;j--)
		{
			res= ncr(i,j);
			if(res!=0) printf(" %d",res);
			else printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			res= ncr(i,j);
			printf(" %d",res);
		}
		printf("\n");
	}
}
int ncr(int n, int r)
{
	int num=0,den1=0,den2=0,tm=0,res=0;
	num= factorial(n);
	tm=n-r;
	den1= factorial(tm);
	den2= factorial(r);
	res=num/(den1*den2);
	return res;
}
int factorial(int n)
{
	int i,j=1;
	for(i=1;i<=n;i++) j=j*i;
	return j;
}
