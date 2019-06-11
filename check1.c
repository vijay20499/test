#include<stdio.h>
int main()
{
long long int num;
scanf("%lld",&num);
if(num<0)
printf("invalid");
else if(num%2==0)
printf("Even");
else
printf("Odd");
}
