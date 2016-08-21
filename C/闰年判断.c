#include <stdio.h>
void main()
{
    int year;
	printf("Input a year:\n");
	scanf("%d",&year);
	if ((year%4==0)&&(year%100!=0)||(year%400==0))
		printf("该年是闰年");
	else 
		printf("该年不是闰年");

	system ("pause");



}