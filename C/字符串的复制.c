#include "stdio.h"
#include "string.h"
void main()
{
	char str1[40],str2[40];
	printf("input a string\n");
	scanf("%s",str1);
	puts(str1);
	printf("input a string\n");
	scanf("%s",str2);
	/*	char str1[20]="hello";
	char str2[20]="hallowbaby";*/
	strcpy(str1,str2);
	printf("%s",str1);
	
	
}
