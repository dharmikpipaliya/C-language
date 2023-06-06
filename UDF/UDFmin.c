#include<stdio.h>
int get(int n,int a[100])
{
    int max=a[0],i;
 for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("\nmax:%d",max);
}

int main()
{
    int n=3, a[100],i;
for(i=0; i<n; i++)
{
    printf("Enter the Value");
    scanf("%d",&a);
    get(n,a);
}


    return 0;
}