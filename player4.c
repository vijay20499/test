#include<stdio.h>
int main()
{
long int num,fact=1;
scanf("%ld",&num);
if(num==0)
printf("1");
else if(num<=20)
{
for(int i=num;i>=1;i--)
fact=fact*i;

printf("%ld",fact);
}
}
