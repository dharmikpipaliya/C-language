#include<stdio.h>

int main()
{
    int a[100],n,i,sum=0,per;
    printf("Enter Arrey size=");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\na[%d]",i);
        scanf("%d",&a[i]);
        sum = sum + a[i];
        per = sum/n;
            }
            printf("sum=%d",sum);
            printf("per=%d",per);

}