#include<stdio.h>
#include<string.h>
void main()
{

char a[100];
int cnt;

printf("Enter String:=");
gets(a);
cnt = strlen(a);
printf("total char = %d",cnt);


printf("\n Capital =%s",strupr(a));
printf("\n Small =%s",strlwr(a));
printf("\n rev =%s",strrev(a));
// printf("\n cpy=%s",strcpy(a));


    
}