#include<stdio.h>
int main()
{
int n,m,a[1000],u[100],v[100];
scanf("%d %d",&n,&m);
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
for(int i=0;i<m;i++)
{
scanf("%d %d",&u[i],&v[i]);
}
for(int i=0;i<m;i++)
{
int sum=0;
for(int j=u[i];j<=v[i];j++)
sum=sum+a[j];
printf("%d",sum);
if(i!=n)
printf("\n");
}
}
