#include<stdio.h>
int main()
{
int a[50][50],i,j,n,sum=0,max=a[0][0],min,add;
printf("Enter the Value=");
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0; j<n; j++)
{
    printf("a[%d][%d]",i,j);
    scanf("%d",&a[i][j]);
  }
  }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",a[i][j]);
        }
                printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            sum = sum+a[i][j];
        }
    }
    printf("sum=%d",sum);

    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
      {
          if(max<a[i][j])
        {
            max=a[i][j];
        }
      }
    }           

    printf("max=%d",max);

     for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
      {
          if(min>a[i][j])
        {
            min=a[i][j];
        }
      }
    }

    printf("min=%d",min);


    for(i=0;i<n;i++)
    {
        add=0;
        for(j=0;j<n;j++)
        {
            add = add+a[i][j];
        }
        printf("\nadd=%d",add);
    }
    return 0;
}