#include<stdio.h>

int main(){
    int n,k=0,i=1;
    printf("n");
    scanf("%d",&n);
    while(i <= n)
    {
        if(n%i == 0)
        {
            k++;
        }
        i++;
    }
    if(k == 2)
    {
        printf("prime");
    }else{
        printf("not prime");
    }







    return 0;
}