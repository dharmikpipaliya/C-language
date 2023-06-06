#include<stdio.h>

void main()
{
    int n,temp,i=1,sum;

    do
    {
        n = i;
        sum = 0;

        do
        {
            temp=n%10;
            sum = sum*10+temp;
            n=n/10;
        }
        while(n!=0);
        if(i==sum)
        {
            printf("%d",i);
        }
        i++;
    }
    while(i<1000);
    return 0;
}