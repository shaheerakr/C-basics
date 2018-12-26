#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,*ptr,var[3]={10,20,30};
    ptr=var;
    for(i=0;i<3;i++)
    {
        printf("address of  var: %d\n",ptr);
        printf("value of var: %d\n",*ptr);
        ptr++;
    }
    return 0;
}
