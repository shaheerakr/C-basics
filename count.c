#include<stdio.h>

int main()
{
	int count[100];
	int i;
	for(i=0;i<100;i++) count[i]=i+1;
	for(i=0;i<100;i++) printf("%d\n",count[i]);
}
