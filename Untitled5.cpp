#include<iostream>
#include<conio.h>
#include<math.h>
 
int add();
int sub();
int choice();
int multiply();
int divide();
int power();
int sqroot();
int cuberoot();
void equation();

int main()
{	
	choice();
	getch();
	return 0;
}


int add()
{
	float numone,numtwo,res;
	printf("Enter first number: ");
	scanf("%f",&numone);
	printf("Enter second number: ");
	scanf("%f",&numtwo);
	res=numone+numtwo;
	return printf("Your sum is: %f",res);
}
int sub()
{
	float numone,numtwo,res;
	printf("Enter first number: ");
	scanf("%f",&numone);
	printf("Enter second number: ");
	scanf("%f",&numtwo);
	res=numone-numtwo;
	return printf("Your result is: %f",res);
}
int choice()
{

	int choice;
	printf("\t\t\tCalculator");
	printf("\n1.Add\t2.Subtract\t3.Multipy\t4.Divide\t5.Power\n\n6.Square Root\t7.Cube root\t8.Quadritic equation\t9.Exit");
	scanf("%d",&choice);
	if(choice==1)
	{
		int ch;
		add();
		printf("\nto go back press 1 or to exit press any button");
		scanf("%d",&ch);
		if(ch==1)
		{
			main();
		}
		else
		{
			return 0;
		}
	}
	else if(choice==2)
	{
		int ch;
		sub();
		printf("\nto go back press 1 or to exit press any button");
		scanf("%d",&ch);
		if(ch==1)
		{
			main();
		}
		else
		{
			return 0;
		}
	}
	else if(choice==3)
	{
		int ch;
		multiply();
		printf("\nto go back press 1 or to exit press any button");
		scanf("%d",&ch);
		if(ch==1)
		{
			main();
		}
		else
		{
			return 0;
		}
	}
	else if(choice==4)
	{
		int ch;
		divide();
		printf("\nto go back press 1 or to exit press any button");
		scanf("%d",&ch);
		if(ch==1)
		{
			main();
		}
		else
		{
			return 0;
		}
	}
	else if(choice==5)
	{
		int ch;
		power();
		printf("\nto go back press 1 or to exit press any button");
		scanf("%d",&ch);
		if(ch==1)
		{
			main();
		}
		else
		{
			return 0;
		}
	}
	else if(choice==6)
	{
		int ch;
		sqroot();
		printf("\nto go back press 1 or to exit press any button");
		scanf("%d",&ch);
		if(ch==1)
		{
			main();
		}
		else
		{
			return 0;
		}
	}
	else if(choice==7)
	{
		int ch;
		cuberoot();
		printf("\nto go back press 1 or to exit press any button");
		scanf("%d",&ch);
		if(ch==1)
		{
			main();
		}
		else
		{
			return 0;
		}
	}
	else if(choice==8)
	{
		int ch;
		equation();
		printf("\nto go back press 1 or to exit press any button");
		scanf("%d",&ch);
		if(ch==1)
		{
			main();
		}
		else
		{
			return 0;
		}
	}
	else if(choice==9)
	{
		return 0;
	}
	else
	{
		printf("\n Invald option\n");
		main();
	}
}
int multiply()
{
	float numone,numtwo,res;
	printf("Enter first number: ");
	scanf("%f",&numone);
	printf("Enter second number: ");
	scanf("%f",&numtwo);
	res=numone*numtwo;
	return printf("The product is: %f",res);
}
int divide()
{
	float numone,numtwo,res;
	printf("Enter first number: ");
	scanf("%f",&numone);
	printf("Enter second number: ");
	scanf("%f",&numtwo);
	res=numone/numtwo;
	return printf("The result is: %f",res);
}
int power()
{
	float base,exp,res;
	printf("Enter base: ");
	scanf("%f",&base);
	printf("Enter exponent: ");
	scanf("%f",&exp);
	res=pow(base,exp);
	return printf("The result is: %f",res);
}
int sqroot()
{
	float base,res;
	printf("Enter base: ");
	scanf("%f",&base);
	res=pow(base,0.5);
	return printf("The square root is: %f",res);
}
int cuberoot()
{
	float base,res;
	printf("Enter base: ");
	scanf("%f",&base);
	res=pow(base,0.33333333);
	return printf("the cube root is: %f",res);
}
void equation()
{
	float a,b,c,x1,x2,bsq;
	printf("Enter a: ");
	scanf("%f",&a);
	printf("Enter b: ");
	scanf("%f",&b);
	printf("Enter c: ");
	scanf("%f",&c);
	x1=(-b+pow(pow(b,2)-4*(a*c),0.5))/(2*a);
	x2=(-b-pow(pow(b,2)-4*(a*c),0.5))/(2*a);
	printf("x1= %f",x1);
	printf("\nx2= %f",x2);
}
