#include "stdio.h"
#include "string.h"
void main()
{
	char str1[40],str2[40];
	printf("input a string\n");
	scanf("%s",str1);
	printf("input a string\n");
	scanf("%s",str2);
	if(strcmp(str1,str2)>0)
	{
		printf("str1>str2");
	
	}
	if(strcmp(str1,str2)==0)
	{
		printf("str1=str2");
	
	}
	if(strcmp(str1,str2)<0)
	{
		printf("str1<str2");
	
	}





}