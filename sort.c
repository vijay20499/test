#include<stdio.h>
int main()
{
int n,a[10000];
scanf("%d",&n);
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
for(int i=0;i<n-1;i++)
{
for(int j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
int temp;
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
long long int sum=0,po=1;
for(int i=0;i<n;i++)
{
//printf("%d ",a[i]);
sum=sum+(po*a[i]);
po=po*10;
}
printf("%lld",sum);
}
