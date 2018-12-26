#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

int main()
{
    struct book
    {
        char name;
        float price;
        int pages;
    };
    struct book b1,b2,b3;
    printf("please enter name of books, price and pages\n");
    b1.name=getche();
    scanf("%f%d",&b1.price,&b1.pages);
    printf("for 2nd book");
    b2.name=getche();
    scanf("%f%d",&b2.price,&b2.pages);
    printf("for third book");
    b3.name=getche();
    scanf("%f%d",&b3.price,&b3.pages);
    printf("name\t\tprice\t\tpages\n");
    printf("%c\t\t%.2f\t\t%d\n",b1.name,b1.price,b1.pages);
    printf("%c\t\t%.2f\t\t%d\n",b2.name,b2.price,b2.pages);
    printf("%c\t\t%.2f\t\t%d\n",b3.name,b3.price,b3.pages);

    return 0;
}
