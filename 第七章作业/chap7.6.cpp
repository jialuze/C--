#include <stdio.h>  
#include <string.h>  
int main()  
{  
    char s1[30];  
    char s2[10];  
    int len1,len2; 
    int i;  
    printf("�������ַ���1��\n");  
    gets(s1);  
    printf("�������ַ���2��\n");  
    gets(s2);  
  
    len1=strlen(s1);  
    len2=strlen(s2);  
  
    for(i=0;i<=len2;i++)  
        s1[len1+i]=s2[i];     
      
    printf("%s\n",s1);  
} 
