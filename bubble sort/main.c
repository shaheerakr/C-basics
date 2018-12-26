#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,sw;
    int arr[100];
    printf("how many numbers you want to sort: ");
    scanf("%d",&n);
    printf("enter %d numbers",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                sw=arr[j];
                arr[j]=arr[i];
                arr[i]=sw;
            }
        }
    }
    printf("\naccneding order");
    for(i=0;i<n;i++)
    {
        printf("\n%d",arr[i]);
    }
    return 0;
}
