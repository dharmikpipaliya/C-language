#include<stdio.h>

int main()
{
int a,b,c,i=1,sum,mul,t,n;
printf("a");
scanf("%d",&a);
printf("b");
scanf("%d",&b);
printf("c");
scanf("%d",&c);


if(a==b&&b==c)
{
    for(;i<=1000;)
    {
        n=i;
        sum = 0;
        mul =1;
        for(;n != 0 ;)
        {
            t = n%10;
            sum = sum+t;
            mul = mul*t;
            n = n/10;
        }
        if(sum == mul)
        {
            printf("\t%d",i);
        }
        i++;
    }
}
else if(a==b)
{
    i=n;
 do
		{
			t=n%10;
			sum=sum*10+t;
			n=n/10;
		}
		while (n!=0);
			printf("%d",sum);

			if(i==sum)
			{
				printf("\npalindrom");
			}
			else
			{
				printf("\nnot palindrom");
			}

}
   return 0;
}