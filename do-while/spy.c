#include<stdio.h>

int  main()
{
	int sum=0,temp,n,i=1;

		printf("n=");
		scanf("%d",&n);
		do
		{
			temp=n%10;
			sum=sum+temp;
			i=i*temp;
			n=n/10;
		}
		while (n!=0);

			if(i==sum)
			{
				printf("\n spy");
			}
			else
			{
				printf("\n not spy");
			}

	return 0;	
}