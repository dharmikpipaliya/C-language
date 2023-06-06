#include<stdio.h>

int main()
{
int n,temp,sum=0,i=1;
printf("N=");
scanf("%d",&n);
    for(;n!=0;)
    {

        temp=n%10;
        sum =sum+temp;
        i=i*temp;
        n=n/10;
    }
    if(i==sum)
{
    printf("\n spy");
}else{
    printf("\n not spy");
}



    return 0;
}