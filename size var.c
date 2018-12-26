#include<stdio.h>
#include<stdlib.h>

int main()
{
	char ptr[100]="564.65456445646545645646548947561515648413148946146165456465454564564";
	double fl;
	fl=atof(ptr);
	puts(ptr);
	printf("%.20lf",fl);
	return 0;
}
