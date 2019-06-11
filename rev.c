#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int k=0;
while(n>0)
{
int re;
re=n%10;
k=(k*10)+re;
n=n/10;
}
printf("%d",k);
}
