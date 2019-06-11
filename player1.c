#include<stdio.h>
int main()
{
long int n,a[100000];
scanf("%ld",&n);
for(int i=0;i<n;i++)
scanf("%ld",&a[i]);
for(int i=0;i<n;i++)
{
if(i%2==0)
{
if(a[i]%2!=0)
printf("%ld ",a[i]);
}
else
{
if(a[i]%2==0)
printf("%ld ",a[i]);
}
}
}

