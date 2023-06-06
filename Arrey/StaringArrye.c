#include<stdio.h>

int main()
{
    char a[100],i,Null;
    int count=0;
    printf("Enter the String=:");
    scanf("%s",&a);

    // printf("\nRepeat=:%s",a);
    for(i=0; a[i] != Null; i++)
    {
        count++;

    }
    printf("\ntotal char = %d",count);
    count = 0;

    for(i=0; a[i]!= Null;i++)
    {
        if(a[i]>=65 && a[i]<=90)
        {
            count++;
        }
    }

printf("\ntotal Uper char=:%d",count);
count = 0;
 for(i=0; a[i]!= Null;i++)
    {
        if(a[i]>=97 && a[i]<=122)
        {
            count++;
        }
    }
    printf("\ntotal Lower char=:%d",count);
    

count = 0;
 for(i=0; a[i]!= Null;i++)
    {
        if(a[i]>=48 && a[i]<=57)
        {
            count++;
        }
    }
    printf("\ntotal digit char=:%d",count);
    
count = 0;
 for(i=0; a[i]!= Null;i++)
    {
        if((a[i]>=58 && a[i]<=64)||(a[i]>=33 && a[i]>=47))
        {
            count++;
        }
    }
    printf("\ntotal special char=:%d",count);
    
    count = 0;
 for(i=0; a[i]!= Null;i++)
    {
        if(a[i]==65 || a[i]==69 || a[i]==73 || a[i]==79 || a[i]==85)
        {
            count++;
        }
    }
    printf("\ntotal vowels capital char=:%d",count);
    
     count = 0;
 for(i=0; a[i]!= Null;i++)
    {
        if(a[i]==97 || a[i]==101 || a[i]==105 || a[i]==111 || a[i]==117)
        {
            count++;
        }
    }
    printf("\ntotal vowels small char=:%d",count);
    
 count = 0;
 for(i=0; a[i]!= Null;i++)
    {
        if(a[i]>=32)
        {
            count++; 
        }
    }
    printf("\ntotal spance char=:%d",count);
    


    return 0;
}