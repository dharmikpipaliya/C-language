#include<stdio.h>

int main()
{
    char a[100],i,Null;
    int count = 0;
    printf("Enter the String=:");
    scanf("%s",&a);
    printf("\nrepeat:=%s",a);
    for(i=0; a[i]!=Null; i++)
    {
        if(a[i]>=65&&a[i]<90)
        {
         a[i]=a[i]+32;   
        }
        if(a[i]=97&&a[i]<=122){
            a[i]=a[i]-32;
        }
        printf("%c",a[i]);

     }



return 0;
}