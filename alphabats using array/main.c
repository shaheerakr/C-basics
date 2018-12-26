#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    printf("how many numbers do you want");
    scanf("%d",&n);
    if(n<2)
    {
        printf("numbers should be greater then 1");
        return 0;
    }
    int alph[n],alph2[n];
    printf("enter numbers");
    for(i=0;i<n;i++)
    {
        scanf("%d",&alph[i]);
    }
    for(i=0;i<n;i++)
    {
        alph2[i]=(alph[i]*10)+alph[i+1];
        if(i==n-1) break;
        printf("%c\n",alph2[i]);
    }
    return 0;

}
