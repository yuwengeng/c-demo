#include <stdio.h>
void main()
{
	int year;
	printf("Input year:");
	scanf("%d",&year);
	if(((year%4==0)&&(year%100!=0))||(year%400==0))
		printf("%d是闰年\n",year);
	else
		printf("%d不是闰年\n",year);
	getchar;


}