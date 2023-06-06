#include<stdio.h>
int main()
{
int n,a=1,i=1,k=0;
while(a <= 1000)
{
n=a;
i=1;
k=0;
    while(i <= n)
    {
        if(n%i == 0){
            k++;
        }
        i++;
    }
    if(k == 2){
        printf("\n%d",a);
    }
    a++;


}
return 0;
}