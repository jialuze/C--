#include <stdio.h>  
int main()  
{  
    float I,a;  
    printf("请输入当月利润I：\n");  
    scanf("%f",&I);  
    if(I<=100000)  
       a=0.1*I;  
    else if(I<=200000)  
            a=(I-100000)*0.075+10000;  
         else if(I<=400000)  
                 a=(I-200000)*0.05+10000+7500;  
            else if(I<=600000)  
                    a=(I-400000)*0.03+10000+7500+10000;  
                else if(I<=1000000)  
                        a=(I-600000)*0.015+10000+7500+10000+6000;  
                     else  
                         a=(I=1000000)*0.01+10000+7500+10000+6000+6000;  
    printf("应发奖金总数为：");  
    printf("%f\n",a);  
    return 0;  
} 
