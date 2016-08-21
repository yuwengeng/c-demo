#include "stdio.h"
#include "string.h"
void main()
{
	char str[40];
	int t;
	printf("put a string!\n");
	gets(str);
	printf("%s",str );
    t=strlen(str);
	printf("%d",t);

}