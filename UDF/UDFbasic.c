#include<stdio.h>
void get(int n)
{
    int i;
 for(i = 1; i <=10; i++)
 {
    printf("\n%d*%d=%d",n,i,i*n);
 }
}
int main()
{

get(3);
return 0;
}