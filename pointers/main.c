#include <stdio.h>
#include <stdlib.h>

int main()
{
    int var=50;
    int *ptr;
    ptr=&var;
    printf("address of var is %d\n",&var);
    printf("address in ptr is %d\n",ptr);
    printf("value of var is %d\n",*ptr);
    return 0;
}
