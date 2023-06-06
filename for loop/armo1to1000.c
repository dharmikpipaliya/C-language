#include<stdio.h>
int main()
{
int n=1,i=1,temp,sum;

for(;i<1000;)
{
sum = 0;
n=i;

for( ; n!= 0 ;)
{
    temp = n%10;
    sum =temp*temp*temp+sum;
    n=n/10;

}
if(sum == i)
{
    printf("\t%d",i);
}
i++;
}




return 0;

}