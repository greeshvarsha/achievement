#include<stdio.h>
void main()
{
char a;
scanf("%c",&a);
if(a=='a'||'e'||'i'||'o'||'u'||'A'||'E'||'I'||'O'||'U')
{
printf("%c is vowel",a);
}
else
{
printf("%c is consonant",a);
}
}
