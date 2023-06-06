#include <stdio.h>
#include<math.h>
#include<stdlib.h>


int main()
{
int p,s,c,f,fab,a,cb;
    p = pow(6,2);
    printf("\nPow=%d",p);

    s=sqrt(49);
    printf("\nsqrt=%d",s);

    c= ceil(2.1);
    printf("\nceil%d",c);

    //down
    f = floor (2.9);
    printf("\nfabs=%d",f);
    //abs
    a= abs(-9);
    printf("\nabs =%d",a);
    //fab 
    fab =fabs(-8.7);
    printf("\nfabs = %d",fab);

    cb = cbrt(8);
    printf("\ncbrt = %d",cb);

    return 0;
}