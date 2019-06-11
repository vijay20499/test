#include<stdio.h>
int main()
{
int n,a[10000];
scanf("%d",&n);
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
for(int i=0;i<n;i++)
{
if(a[i]==i)
{
printf("%d ",a[i]);
}
}
}
