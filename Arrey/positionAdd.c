#include<stdio.h>

int main()
{
    int a[100],n,i,j,swap,pos,val;
    printf("enter Arrey size:=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n[%d]=",i);
        scanf("\n%d",&a[i]);
    }
    printf("Enter pos=");
    scanf("\n%d",&pos);
    printf("Enter value");
    scanf("\n%d",&val);
    for(i=n;i>pos;i--)
    {
        a[i]=a[i-1];
    }
    a[pos]=val;
    n++;

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                swap = a[i];
                a[i]=a[j];
                a[j]=swap;
            }
        }
        printf("\na[%d]=%d",i,a[i]);
    }




}