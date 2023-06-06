#include<stdio.h>

int main()
{
	int k=0,i=1,n;

		printf("enter n value");
		printf("\nn=");
		scanf("%d",&n);

		do
		{
			if(n%i==0)
			{
				k++;
			}


			i++;
		}
		while (i<=n);

			if(k==2)
			{
				printf("\n prime");
			}
			else
			{
				printf("\nnot prime");
			}

return 0;
}