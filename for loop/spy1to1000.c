#include<stdio.h>

int main()
{
int n=1,sum,multi,rev,i=1;

for(;i<=1000;)
{
    n=i;
    multi = 1;
    sum =0;

        rev=n%10;
        sum=sum+rev;
        multi=multi*rev;
        n=n/10;
}
    if(sum==multi)
    {
        printf("\t%d",i);
    }
    i++;
    
return 0;
}