#include<stdio.h>

int main()
{
int k=0,i=1,l,a=1;

for(a=1;a<1000;a++)
{
    l = a;
    i = 1;
    k = 0;
    for(;i<=1;i++)
    {
        if(l%i == 0)
        {
            k++;
        }
    }
    if(k==2)
    {
        printf("\t%d",a);
    }
    a++;
}
return 0;

}