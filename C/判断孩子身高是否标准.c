#include "stdio.h"
void main()
{
	int a;
	float b,c,d;
	printf("put a number(ÄÐº¢ÊäÈë1£¬Å®º¢ÊäÈë2)!\n");
	scanf("%d",&a);
	printf("put the student height\n");
    scanf("%f",&b);
	printf("put the father and mother height\n");
    scanf("%f%f",&c,&d);
	if(a==1)
	{
		if(b>((c+d)/0.57))
			printf("yes!\n");
		else
			printf("no!");

 
	}
	else 
		if(a==2)
	{
		if(b>((c+d)/0.64))
			printf("yes!\n");
		else
			printf("no!");

 
	}




}