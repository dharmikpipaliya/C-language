#include<stdio.h>

void main()
{
    int sum,temp,a,i=1;

    for(i = 1;i<=1000;i++)
    {
        a=i*i;
        sum = 0;

        for(;a != 0;)
        {
            temp = a%10;
            sum = sum + temp;
            a = a/10;
        }
        if(sum == i)
        {
            printf("\t%d",i);
        }
    }
}