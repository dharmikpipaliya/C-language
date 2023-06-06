#include<stdio.h>

int main()
{
int n,sum=0,temp,i;
printf("N=");
scanf("%d",&n);
i=n;

for(;n!=0;)
{
    temp=n%10;
    sum = sum*10+temp;
    n=n/10; 
}
printf("%d",sum);
if(i == sum )
{
    printf("\npalindrom");
}else{
    printf("\nnot palindrom");
}



return 0;
}