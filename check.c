#include<stdio.h>
int main()
{
long long int num;
scanf("%lld",&num);
if(num==0)
printf("Zero");
else if(num<0)
printf("Negative");
else
printf("Positive");
}
