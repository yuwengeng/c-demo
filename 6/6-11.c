#include "stdio.h"
void main()
{
	int a=0,sum=0,flag=0;
	do
	{
		printf("���������������\n");
		scanf("%f",&a);
		sum=sum+a;
		flag++;
		printf("���ں�Ϊ%d\n",sum);
	}
	while(a>0);
	if(a<=0)
		printf("������󣬼������\n");
	printf("�ۼ�����%d",flag);
}