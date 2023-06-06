#include<stdio.h>
int main()
{
    int a[50],n,i,j,swap;

    printf("Enter Arrey size = ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\na[%d]",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
            swap=a[i];
            a[i] = a[j];
            a[j] =swap;
            }
        }
printf("\na[%d]=%d",i,a[i]);
    }
}