#include <stdio.h>

void Strcat(char *s1,char *s2)
char *p=s1,*q=s2;
while(*p!='\0')
p++;
while(*q!='\0')
{
	*p=*q;
	p++
    q++;
}
