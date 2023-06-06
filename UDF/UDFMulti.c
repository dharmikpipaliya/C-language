#include<stdio.h>
int get(int a,int b)
{
    int multi;
    multi = a*b;
    return multi;
}
int main()
{
    int multi;

    multi=get(12,12);
    printf("%d",multi);



    return 0;
}