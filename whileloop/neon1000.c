#include<stdio.h>

int main()
{
int n,multi,temp,i=1,sum;
while(n<=1000)
{
n=i;
sum =0;
multi = n*n;
while(multi != 0)
{
temp = multi%10;
sum = sum+temp;
multi =multi/10;
}
if(sum == n)
{
    printf("\n%d",i);
    i++;
}
}



    return 0;
}