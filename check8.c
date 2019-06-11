#include<stdio.h>
int main()
{
int n,m,sum=0,a[1000];
scanf("%d %d",&n,&m);
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
for(int i=0;i<m;i++)
sum=sum+a[i];
printf("%d",sum);
}
