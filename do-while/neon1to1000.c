#include<stdio.h>
void main()
{
	int sum,temp,a,i=1;


    do
      {
       a=i*i;
       sum=0;

	   do

		{
			temp=a%10;
			sum=sum+temp;

			a=a/10;
		}

		while (a!=0);
			if(sum==i)
			{
				printf("\t%d",i);
			}
			i++;

      }
	while(i<=1000);
    
    return 0;
}