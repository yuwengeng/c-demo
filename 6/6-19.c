#include<stdio.h>
void main()
{
	double j,sum;
	double i=0.02;
	for(j=1;j<=30;j++)
	{
		sum=i*2;
		i=sum;
	}
	    printf("���̸�İ����%.0lfԪ\n",i);
		printf("İ���˸�����%dԪ\n",100000*30);
}