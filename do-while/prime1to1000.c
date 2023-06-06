#include<stdio.h>

int main()
{
    int i=1,a=1,n,k=0;
    printf("enter the Number");
    do 
    {
        n=a;
        i=1;
        k=0;
        do
        {
            if(n%i == 0)
            {
                k++;
            }
            i++;
        }
        while(i<=n);
        {
            if(k==2)
            {
                printf("\t%d",a);
            }
        }
        a++;
    }
    while(a<=1000);
    return 0;
}