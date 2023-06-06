#include<stdio.h>

int main()
{
    int a[100],i,n,sum=0,per,max=a[0],c;
    printf("Enter the Arrye size=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n[%d]=",i);
        scanf("\n%d",&a[i]);
        sum=sum+a[i];
    }
    for(i=0;i<n;i++)
    {`
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("\nsum:%d",sum);
    per = sum/n;    
    printf("\nper:%d",per);

    printf("\nmax:%d",max);

    return 0;
}