#include <stdio.h>
void main()
{
    int year;
	printf("Input a year:\n");
	scanf("%d",&year);
	if ((year%4==0)&&(year%100!=0)||(year%400==0))
		printf("����������");
	else 
		printf("���겻������");

	system ("pause");



}