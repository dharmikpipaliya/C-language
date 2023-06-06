#include<stdio.h>
int  get(int a,int b)
{
int sum;
sum = a+b;
return sum;
}
int main(){
    int a,b;
    printf("enter A");
    scanf("%d",&a);
    printf("enter B");
    scanf("%d",&b);
printf("sum=%d",get(a,b));
    return 0;
}