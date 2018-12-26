#include<stdio.h>
void input();
void check();
void initialize();

char number[4];
int counter[50]; 

int main()
{
	initialize();
	input();
}
void input()
{
	int i;
	for(i=0;i<4;i++)
	{
		number[i]=0;
	}
	printf("Enter the intial alphabets of number plate of your car");
	scanf("%s",&number);
	if(number[0]<='z'&&number[0]>='a'||number[1]<='z'&&number[1]>='a'||number[2]<='z'&&number[2]>='a')
	{
		printf("Please enter capital letters\n");
		input();
	}
	else if(number[0]>=0&&number[0]<=9&&number[1]>=0&&number[1]<=9&&number[2]>=0&&number[2]<=9)
	{
		printf("Pleas enter initial alphabets of number plate of your car only\n");
		input();
	}
	else if(number[3]>='A'&&number[3]<='Z')
	{
		printf("Please enter correct alphabets from your number plate\n");
		input();
	}
	else
	{
		check();
	}
}
void check()
{
	if(number[0]>='A'&&number[0]<='Z'&&number[1]==0&&number[2]==0)
	{
		printf("goto counter 1\n");
		printf("your ticket number is %d\n",counter[0]);
		counter[0]++;
		input();
	}
	if(number[0]>='A'&&number[0]<='Z'&&number[1]>='A'&&number[1]<='Z'&&number[2]==0)
	{
		printf("goto counter 2\n");
		printf("your ticket number is %d\n",counter[1]);
		counter[1]++;
		input();
	}
	if(number[0]>='A'&&number[0]<='Z'&&number[1]>='A'&&number[1]<='Z'&&number[2]>='A'&&number[2]<='Z')
	{
		printf("goto counter 3\n");
		printf("your ticket number is %d\n",counter[2]);
		counter[2]++;
		input();
	}
	else
	{
		printf("Please Enter corect alphabets from your number plate\n");
		input();
	}
}
void initialize()
{
	int i;
	for(i=0;i<50;i++)
	{
		counter[i]=1;
	}
}
