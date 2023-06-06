#include<stdio.h>

void main()
{
	int n,num,temp,sum=0;

		printf("enter n value");
		printf("\nnum=");
		scanf("%d",&num);
		n=num;

	do
	{
	      temp=n%10;
	      sum=temp*temp*temp+sum;
	      n=n/10;
	}
	while(n>0);
	printf("%d",sum);
	if(sum==num)
	{
		printf("\n armstron");
	}
	else
	{
		printf("\n not armstron ");
	}

return 0;
}