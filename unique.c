#include<stdio.h>
int main()
{
int n,a[10000],c=0;
scanf("%d",&n);
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
for(int i=0;i<n-1;i++)
{
c=0;
for(int j=0;j<n;j++)
{
if(i!=j&&a[i]==a[j])
c++;
}
if(c==1)
{
printf("%d",a[i]);
return 0;
}
}
printf("unique");
}
