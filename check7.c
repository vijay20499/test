#include<stdio.h>
int main()
{
long long int num,res=0;
scanf("%lld",&num);
for(int i=1;i<=num;i++)
res=res+i;
printf("%lld",res);
}
