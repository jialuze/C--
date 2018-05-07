#include"stdio.h"
main()
{
int m,n,t,h,a,b,q;
printf("输入m,n的值：");
scanf("%d%d",&m,&n);
a=m;
b=n;
if (n>m) 
{t=m;m=n;n=t;}
while (m%n!=0)
{ h=n;n=m%n;m=n;}
a=a/n;b=b/n;q=a*b*n;
printf("两数最大公约数为 %d，最小公倍数为 %d\n",n,q);
} 
