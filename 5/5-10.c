#include "stdio.h"
void main()
{
int year,mounth,a;

printf("��������ݺ��·�:\n");
scanf("%d%d",&year,&mounth);
if((year%4==0&&year%100!=0)||year%400==0)
{
	printf("����������\n");
	switch(mounth)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
	printf("%d��%d����31��\n",year,mounth);
	break;
	case 2:
	printf("%d��%d����29��\n",year,mounth);
	break;
	

	case 4:
	case 6:
	case 9:
	case 11:
	printf("%d��%d����30��\n",year,mounth);
     break;
	default:
		printf("���·ݲ����ڣ��������\n");
	}
}
else
{
	printf("������ƽ��\n");
	switch(mounth)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
	printf("%d��%d����31��\n",year,mounth);
	break;
	case 2:
	printf("%d��%d����28��\n",year,mounth);
	break;
	

	case 4:
	case 6:
	case 9:
	case 11:
	printf("%d��%d����30��\n",year,mounth);
     break;
	default:
		printf("���·ݲ����ڣ��������\n");
	
	}
}



}