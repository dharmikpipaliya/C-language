#include<stdio.h>

int main()
{
int a[5],n,i,value,cnt= 0;
printf("Enter the Arrey Size");
scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n[%d]",i);
        scanf("\n%d",&a[i]);
    }
    printf("enter the value");  
    scanf("%d",&value);

    for(i=0;i<n;i++)
    {
        if(a[i] == value)
        {
            cnt++;
        }
       
    }
     printf("%d id found %d time", value,cnt);


    return 0;
} 