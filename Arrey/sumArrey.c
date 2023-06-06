#include<stdio.h>
int main()
{
    int a[5] = {1,2,3,4,5},i,sum = 0,per;

    for(i=0;i<5;i++)
    {
        printf("\na[%d]=%d",i,a[i]);
        sum = sum + a[i];
        per = sum/a[i];
    }
    printf("\nsum=%d",sum);
    printf("\nper=%d",per);
    
}