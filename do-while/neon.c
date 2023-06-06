#include<stdio.h>

int main()
{
	int sum=0,temp,n,a;
	
		printf("n=");
		scanf("%d",&n);

		a=n*n;

		do
		{
			temp=a%10;
			sum=sum+temp;

			a=a/10;
		}
		while (a!=0);

			if(sum==n)
			{
				printf("\n neon");
			}
			else
			{
				printf("\nnot neon");
			}

	return 0;
}