#include<stdio.h>

int main()
{
    char i,j;
    for(i='A';i<='E';i++)
    {
        for(j='E';j>=i;j--)
        {
            printf("%c",j);
        }
        printf("\n");
    }


    return 0;
}