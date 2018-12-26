#include <stdio.h>

int main()
{
	int n,i,lm,res=0;
	printf("how many numbers do you want to add");
	scanf("%d",&lm);
	for(i=1;i<=lm;i++)
	{
		printf("enter %d number",i);
		scanf("%d",&n);
		res=res+n;
	}
	printf("the result of addition is: %d",res);
	return 0;
}
