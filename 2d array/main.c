#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int test[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            test[i][j]=j+1;
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("when row is %d and colume is %d element=%d\n",i+1,j+1,test[i][j]);
        }
    }
    return 0;
}
