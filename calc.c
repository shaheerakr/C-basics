#include <stdio.h>

int add();
int sub();
int product();
int divide();
int mod();
int choice();
int ch();
int ch1,ch2,a,b,c;

int main()
{
	choice();
	getch();
	return 0;
}
int choice()
{
	printf("\t\t\tCalculator\n");
	printf("\t\t\tenter choice number\n");
	printf("1.Addition\t 2.Subtraction\t 3.multiplication\t 4.division\n 5.modulus\t 6.exit");
	scanf("%d",&ch1);
	if(ch1==1)
	{
		add();
		ch();
	}
	else if(ch1==2)
	{
		sub();
		ch();
	}
	else if(ch1==3)
	{
		product();
		ch();
	}
	else if(ch1==4)
	{
		divide();
		ch();
	}
	else if(ch1==5)
	{
		mod();
		ch();
	}
	else if(ch1==6)
	{
		return 0;
	}
	else
	{
		printf("please enter a valid option\n");
		choice();
	}
}
int add()
{
	printf("please enter values");
	scanf("%d %d",&a,&b);
	c=a+b;
	return printf("the value of addition is: %d",c);
}
int sub()
{
	printf("please enter values");
	scanf("%d %d",&a,&b);
	c=a-b;
	return printf("the value of subtraction is: %d",c);
}
int product()
{
	printf("please enter values");
	scanf("%d %d",&a,&b);
	c=a*b;
	return printf("the value of multiplication is: %d",c);
}
int divide()
{
	printf("please enter values");
	scanf("%d %d",&a,&b);
	float d=(float)a/b;
	return printf("the value of division is: %f",d);
}
int mod()
{
	printf("please enter values");
	scanf("%d %d",&a,&b);
	c=a%b;
	return printf("the value of modulus is: %d",c);
}
int ch()
{
	printf("\nif you want to continue press 1 if you want to exit press any key");
	scanf("%d",&ch2);
	if(ch2==1)
	{
		choice();
	}
	else
	{
		return 0;
	}
}
