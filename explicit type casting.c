#include <stdio.h>

int main()
{
	int a,b;
	printf("enter values");			//for division
	scanf("%d %d",&a,&b);
	float c=(float)a/b;
	printf("divison %.2f",c);
	getch();
	return 0;
}
