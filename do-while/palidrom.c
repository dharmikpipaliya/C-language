#include<stdio.h>

void main()
{
	int sum=0,temp,n,i;

		printf("n=");
		scanf("%d",&n);
		i=n;
	     do
		{
			temp=n%10;
			sum=sum*10+temp;
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

return 0;
}
