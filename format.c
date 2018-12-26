#include <stdio.h>

main()
{
	unsigned int u,x,o;
	int i=57;
	float f=3.142;
	char c='A';
	char s[20]= "Shaheer Akram";
	printf("character: %c integer: %d float: %f\n",c,i,f);				//for character ineger and float
	printf("float value in exponential form: %e\n",0.000000005);		//for float value in exponential form
	printf("Enter value for unsigend integer");							//Unsigened integer
	scanf("%d",&u);									
	if(u<0)
	{
		printf("note unsigened integer can not be less than zero garbage value: %u",u);
	}
	else
	{
		printf("undsigend integer: %u\n",u);	
	}
	printf("String: %s\n",s);										//for string format
	printf("enter a hexadecimal number");							//hexadecimal integer
	scanf("%x",&x);
	printf("hexadecimal number is %x\n",x);
	printf("enter a Octal number");									//octal value
	scanf("%o",&o);
	printf("octal number is: %o",o);
}
