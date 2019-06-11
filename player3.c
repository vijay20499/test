#include<stdio.h>
#include<string.h>
int main()
{
char a[1000000];
scanf("%s",a);
long int num;
num=strlen(a);
for(long int i=num-1;i>=0;i--)
printf("%c",a[i]);
}
