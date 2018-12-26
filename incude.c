#include<stdio.h>
#include<area.h>
#include"bmath.h"

int main()
{
	int r=0,l=0,w=0;
	/*printf("enter radius length and width respectivly\n");
	scanf("%d%d%d",&r,&l,&w);
	printf("area of circle is %f\n",areaCircle(r));
	printf("area of square is %d\n",areaSquare(l));
	printf("area of rectengle is %d\n",areaRectangle(l,w));
	printf("area of sphere is %f\n",areaSphere(r));*/
	printf("enter value for factorial");
	scanf("%d",&r);
	printf("factorial of %d is %d",r,fact(r));
	return 0;
}
