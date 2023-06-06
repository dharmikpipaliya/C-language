#include<stdio.h>

void main()
{
int n=1,sum,multi,rev,i=1;

do
{
    n=i;
    multi = 1;
    sum =0;

    do
    {
        rev=n%10;
        sum=sum+rev;
        multi=multi*rev;
        n=n/10;
    }
    while(n!=0);
    if(sum==multi)
    {
        printf("\t%d",i);
    }
    i++;
}
while(i<=1000);
return 0;

}