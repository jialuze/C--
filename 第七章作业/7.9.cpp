#include<stdio.h>  
void TongJi(char s[])  
{  
    int ZiMu=0,KongGe=0,ShuZi=0,QiTa=0,i;  
    for(i=0;s[i]!='\0';i++)  
    {  
        if(s[i]==32)KongGe++;  
        else if((s[i]>=48)&&(s[i]<=57))ShuZi++;  
        else if(((s[i]>=97)&&(s[i]<=122))||((s[i]>=65)&&(s[i]<=90)))ZiMu++;  
        else QiTa++;  
    }  
    printf("�ո�%d�����֣�%d����ĸ��%d��������%d��\n",KongGe,ShuZi,ZiMu,QiTa);  
}  
  
int main()  
{  
    char s[100];  
    printf("�����룺");  
    gets(s);  
    TongJi(s);  
    return 0;  
}  
