#include<stdio.h>
struct demo
{
int a,b;


};
int main()
{
int n,i;
struct demo d[100];
printf("Enter the Size:=");
scanf("%d",&n);
for(i = 0; i<n; i++)
{
printf("enter the Number:-");
scanf("%d",&d[i].a);
printf("Enter the sec num:-");
scanf("\n%d",&d[i].b);

}



return 0;



    
}