#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
     int a,b,c,d,e,p,n;
	 printf("������һ��������5λ����������");
    scanf("%d",&n);
    if (n>9999)
         p=5;
    else if(n>999)
         p=4;
    else if(n>99)
         p=3;
    else if(n>9)
         p=2;
    else p=1;
    printf("λ��:%d\n",p);
    a=n/10000;
    b=(int)(n-a*10000)/1000;
    c=(int)(n-a*10000-b*1000)/100;
    d=(int)(n-a*10000-b*1000-c*100)/10;
    e=(int)(n-a*10000-b*1000-c*100-d*10);
    printf("ÿһλ��Ϊ:");
        if(p==5) 
        {
            printf("%d %d %d %d %d\n",a,b,c,d,e); 
            printf("������Ϊ:%d%d%d%d%d\n",e,d,c,b,a); 
        }
        if(p==4)
        {
            printf("%d %d %d %d\n",b,c,d,e); 
            printf("������Ϊ:%d%d%d%d\n",e,d,c,b); 
        }
        if(p==3) 
        {
            printf("%d %d %d\n",c,d,e); 
            printf("������Ϊ:%d%d%d\n",e,d,c); 
        }
        if(p==2)
        {
            printf("%d %d\n",d,e);
            printf("������Ϊ:%d%d\n",e,d); 
        }
        if(p==1)
        {
            printf("%d\n",e); 
            printf("������Ϊ:%d\n",e); 
        }
 return 0;
}
