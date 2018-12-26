#include <stdio.h>
#include <stdlib.h>

int main()
{
    int var=150;
    int *ptr;
    ptr=&var;
    printf("%d",*ptr);
    return 0;
}
