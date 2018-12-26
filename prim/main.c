#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i=2;
    printf("enter any number");
    scanf("%d",&n);
    while(i<=n-1)
    {
        if(n%i==0)
        {
            printf("%d is not prime",n);
            break;
        }
        i++;
    }
    if(n==i) printf("%d is prime",n);
    return 0;
}
