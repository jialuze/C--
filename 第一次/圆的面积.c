#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define Pi 3.1415926 
int main(int argc, char *argv[]) {
 float r,s;
 printf("������Բ�İ뾶:");
 scanf("%f",&r);
 s=Pi*r*r;
 printf("Բ����Ϊ��%9.7f��Բ�İ뾶Ϊ��%f\nԲ�����Ϊ��%f\n",Pi,r,s);
}

