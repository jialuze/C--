#include <stdio.h>
int main()
{
 int letter=0,space=0,number=0,others=0;
 char nextchar;
 printf("������һ���ַ�\n");
 for(;nextchar!='\n';)
 {
  scanf("%c",&nextchar);
  if(('a'<=nextchar&&nextchar<='z')||('A'<=nextchar&&nextchar<='Z'))
   letter++;
  else if(nextchar==' ')
   space++;
  else if('0'<=nextchar&&nextchar<='9')
   number++;
  else
   others++;
 }
 printf("��Ӣ����ĸ=%d,�ո�=%d,����=%d,�����ַ�=%d\n",letter,space,number,--others);
}
