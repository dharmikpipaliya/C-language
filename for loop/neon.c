#include<stdio.h>

int main()
{
int n,sum=0,temp,a;
printf("N=");
scanf("%d",&n);
a = n*n;
for(;a != 0;)
{
    temp = a%10;
    sum =sum+temp;
    a=a/10;
}
printf("%d",sum);   
if(sum == n)
{
    printf("\n neon");
}
else{
    printf("\n not neon");
}




    return 0;
}