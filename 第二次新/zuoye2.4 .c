#include"stdio.h"
main()
{
int m,n,t,h,a,b,q;
printf("����m,n��ֵ��");
scanf("%d%d",&m,&n);
a=m;
b=n;
if (n>m) 
{t=m;m=n;n=t;}
while (m%n!=0)
{ h=n;n=m%n;m=n;}
a=a/n;b=b/n;q=a*b*n;
printf("�������Լ��Ϊ %d����С������Ϊ %d\n",n,q);
} 
