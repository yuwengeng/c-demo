#include "stdio.h"
void main()
{
int year,mounth,a;

printf("请输入年份和月份:\n");
scanf("%d%d",&year,&mounth);
if((year%4==0&&year%100!=0)||year%400==0)
{
	printf("该年是闰年\n");
	switch(mounth)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
	printf("%d的%d月有31天\n",year,mounth);
	break;
	case 2:
	printf("%d的%d月有29天\n",year,mounth);
	break;
	

	case 4:
	case 6:
	case 9:
	case 11:
	printf("%d的%d月有30天\n",year,mounth);
     break;
	default:
		printf("该月份不存在，输入错误\n");
	}
}
else
{
	printf("该年是平年\n");
	switch(mounth)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
	printf("%d的%d月有31天\n",year,mounth);
	break;
	case 2:
	printf("%d的%d月有28天\n",year,mounth);
	break;
	

	case 4:
	case 6:
	case 9:
	case 11:
	printf("%d的%d月有30天\n",year,mounth);
     break;
	default:
		printf("该月份不存在，输入错误\n");
	
	}
}



}