#include <stdio.h>

int main()
{
    char i;
    for(i='a';i<='z';i++)
    {
        if(i=='a'||i=='e'||i=='o'||i=='u')
        {
            continue;
        }
        else
        {
            printf("%c\n",i);
        }
    }
    return 0;
}
