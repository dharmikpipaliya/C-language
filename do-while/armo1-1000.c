#include<stdio.h>
void main()
{
	int n=1,num=1,temp,sum=0;

    do
	{
	sum=0;
	n=num;

	do
	{
	      temp=n%10;
	      sum=temp*temp*temp+sum;
	      n=n/10;
	}
	 while(n!=0);
	if(sum==num)
	{
		printf("\n%d",sum);
	}
       num++;
	}
       while(num<=1000);
	
    return 0;

}