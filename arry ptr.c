#include<stdio.h>

int main()
{
	int i;
	int arr[3][3]={{1,2,3},{5,6,7},{8,9,10}};
	printf("%d\n",arr[0]);
	printf("%d\n",*(arr+0));
	printf("%d",*(*(arr+2)+1));
	
}
