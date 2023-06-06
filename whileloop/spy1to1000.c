#include<stdio.h>

int main()
{
 
int i=1,n,mul,sum,t;
printf("number");


while(i <= 1000)
{
    n=i;
    sum = 0;
    mul = 1;
    while(n != 0)
    {
        t = n%10;
        sum = sum +t;
        mul = mul *t;
        n = n/10;
    }
if(sum == mul)
{
    printf("\n%d",i);
}
i++;
}



return 0;
    
}
