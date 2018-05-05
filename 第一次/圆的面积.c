#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define Pi 3.1415926 
int main(int argc, char *argv[]) {
 float r,s;
 printf("请输入圆的半径:");
 scanf("%f",&r);
 s=Pi*r*r;
 printf("圆周率为：%9.7f，圆的半径为：%f\n圆的面积为：%f\n",Pi,r,s);
}

