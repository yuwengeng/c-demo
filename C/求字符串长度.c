#include "stdio.h"
#include "string.h"
#include "malloc.h"
#include "stdlib.h"
int Strlen(char *str)
{
	int len=0;
	char *op=str;
	while((*op)!='\0')
	{
		len++;
		op++;
		
	}
	return len;
	
	
}
void main()
{
	int str[50];
	int length;
	printf("please put a string\n");
	//scanf("%s",str);
	gets(str);
	length=Strlen(str);
	printf("the number of string is %d\n",length);
	printf("%s\n",str); 
	
}



