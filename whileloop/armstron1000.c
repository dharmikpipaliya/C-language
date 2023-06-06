#include<stdio.h>
int main(){
int n=1,i=1,rem,sum;

while(i<1000){

sum = 0;
n=i;

while(n != 0){
    rem=n%10;
    sum = rem*rem*rem+sum;
    n = n/10;
}
if(sum == i)
{
    printf("\n%d",i);
}
i++;
}


}