#include "stdio.h"
char compare(char *str1,char *str2)
{
	while(*str1!='\0'||*str2!='\0')
	{
		if(*str1>*str2)
			return 1;
		if(*str1<*str2)
			return -1;
		if(*str1==*str2)
		{
			str1++;
			str2++;
		}
	}
	return 0;
}
int main()
{
	char a[10],b[20];
	int p;
	printf("put two ziu!\n");
	scanf("%s %s",a,b);
	p=compare(a,b);
	if(p==1)
	{printf("str1>str2");}
	if(p==0)
	{printf("str1=str2");}
    if(p==-1)
	{printf("str1<str2");}
	return 0;
	
	
}
