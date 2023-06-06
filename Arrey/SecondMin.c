#include<stdio.h>

int main(){
    int a[100],i,n,max,swap,j;
    printf("Enter the Arrey Size=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n[%d]",i);
        scanf("\n%d",&a[i]);
     } 
     max = a[0];
     for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("\nmax =%d",max);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
            swap=a[i];
            a[i] = a[j];
            a[j] =swap;
            }
        }

    }
    printf("\nSecondeNum=%d",a[1]);
    return 0;
}