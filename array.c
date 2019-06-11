#include<stdio.h>
int main()
{
int n,a[10000],m,b[10000],f;
scanf("%d %d",&n,&m);
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
for(int j=0;j<m;j++)
scanf("%d",&b[j]);
for(int i=0;i<m;i++)
{
f=0;
for(int j=0;j<n;j++)
{
if(b[i]==a[j])
{
f=1;
//printf("%d",b[i]);

}
}
if(f==0)
{
printf("NO");
return 0;
}
}
printf("YES");
}
